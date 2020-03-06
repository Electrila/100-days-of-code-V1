import string
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from os import path
from wordcloud import WordCloud, STOPWORDS, ImageColorGenerator
from PIL import Image
import GetOldTweets3 as got

# Parameters used to fetch tweets
# Dates must be in yyyy-mm-dd format
username = 'realDonaldTrump'
date_from = '2019-01-01'
date_to = '2020-03-05'
count = 10000

# Create object for search criteria
tweet_criteria = got.manager.TweetCriteria().setUsername(username)\
                                            .setSince(date_from)\
                                            .setUntil(date_to)\
                                            .setMaxTweets(count)

# Obtain tweets and convert returned text into DataFrame
tweets_df = pd.DataFrame([[tweet.text] for tweet in got.manager.TweetManager.getTweets(tweet_criteria)], columns=['text'])

# Define remove_punctuation function to strip punctuation from text
def remove_punctuation(text):
    for punctuation in string.punctuation:
        text = text.replace(punctuation, '')
    return text

# Apply remove_punctuation function to tweets_df['text'] and convert to single str
tweets_df['text'] = tweets_df['text'].apply(remove_punctuation)
tweets_all = ' '.join(tweet for tweet in tweets_df['text'])

# Import pre-loaded list of stopwords and add/remove as necessary
stopwords = set(STOPWORDS)
stopwords.remove('very')
stopwords.add('will')
stopwords.add('didn')

# Create array out of image and set all values to 255
mask = np.array(Image.open('Twitter Cloud/trump_silhouette.png'))
mask[mask == 0] = 255

# Generate WordCloud
wc = WordCloud(max_words=1000, stopwords=stopwords, mask=mask, contour_color='white', contour_width=3, colormap='bwr').generate(tweets_all)
plt.imshow(wc, interpolation='bilinear')
plt.axis('off')
plt.show()