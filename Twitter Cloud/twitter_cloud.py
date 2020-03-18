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
date_from = '2020-02-01'
date_to = '2020-03-17'
count = 10000

# Create object for search criteria
tweet_criteria = got.manager.TweetCriteria().setUsername(username)\
                                            .setMaxTweets(count)\
                                            .setSince(date_from)\
                                            .setUntil(date_to)

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
stopwords.add('very')
stopwords.add('didn')
stopwords.add('will')
stopwords.add('got')
stopwords.add('dont')
stopwords.add('going')
stopwords.add('let')
stopwords.add('im')
stopwords.add('thats')
stopwords.add('well')
stopwords.add('yeah')
stopwords.add('lets')
stopwords.add('Oh')
stopwords.add('made')
stopwords.add('gotta')
stopwords.add('go')
stopwords.add('want')
stopwords.add('cant')
stopwords.add('maybe')
stopwords.add('make')
stopwords.add('making')
stopwords.add('know')
stopwords.add('thing')
stopwords.add('get')
stopwords.add('getting')
stopwords.add('way')
stopwords.add('need')
stopwords.add('think')
stopwords.add('much')
stopwords.add('see')
stopwords.add('back')
stopwords.add('take')
stopwords.add('try')
stopwords.add('trying')
stopwords.add('even')
stopwords.add('feel')
stopwords.add('now')
stopwords.add('never')
stopwords.add('must')
stopwords.add('one')
stopwords.add('every')
stopwords.add('many')
stopwords.add('look')
stopwords.add('doesn')
stopwords.add('big')
stopwords.add('happen')
stopwords.add('done')
stopwords.add('year')
stopwords.add('far')
stopwords.add('true')
stopwords.add('day')
stopwords.add('really')
stopwords.add('bad')
stopwords.add('two')
stopwords.add('said')
stopwords.add('nothing')
stopwords.add('others')
stopwords.add('always')
stopwords.add('week')
stopwords.add('KEEP')
stopwords.add('continue')
stopwords.add('everyone')
stopwords.add('amp')
stopwords.add('people')
stopwords.add('thank')
stopwords.add('don')
stopwords.add('time')
stopwords.add('place')
stopwords.add('today')
stopwords.add('tonight')
stopwords.add('nice')
stopwords.add('put')
stopwords.add('early')
stopwords.add('right')
stopwords.add('better')
stopwords.add('put')
stopwords.add('years')
stopwords.add('stop')
stopwords.add('quickly')
stopwords.add('deal')
stopwords.add('say')
stopwords.add('possible')
stopwords.add('hard')
stopwords.add('soon')
stopwords.add('PM')
stopwords.add('real')
stopwords.add('long')
stopwords.add('countries')
stopwords.add('low')
stopwords.add('working')
stopwords.add('taking')
stopwords.add('job')
stopwords.add('work')
stopwords.add('world')
stopwords.add('great')
stopwords.add('wonderful')
stopwords.add('good')
stopwords.add('number')
stopwords.add('good')
stopwords.add('Great')
stopwords.add('great job')
stopwords.add('help')
stopwords.add('called')
stopwords.add('Watch')
stopwords.add('strong')
stopwords.add('full')
stopwords.add('Help')
stopwords.add('best')
stopwords.add('things')
stopwords.add('Things')
stopwords.add('report')
stopwords.add('state')
stopwords.add('State')
stopwords.add('coming')
stopwords.add('evening')
stopwords.add('million')
stopwords.add('friend')
stopwords.add('re')
stopwords.add('greatest')
stopwords.add('Greatest')
stopwords.add('case')
stopwords.add('total')
stopwords.add('lot')
stopwords.add('record')
stopwords.add('States')
stopwords.add('everything')
stopwords.add('Thanks')
stopwords.add('numbers')
stopwords.add('decision')
stopwords.add('another')
stopwords.add('together')
stopwords.add('incredible')
stopwords.add('last')
stopwords.add('country')

# Create array out of image and set all values to 255
mask = np.array(Image.open('Twitter Cloud/trump_silhouette.png'))
mask[mask == 0] = 255

# Generate WordCloud
wc = WordCloud(max_words=100, min_font_size=7, stopwords=stopwords, mask=mask, contour_color='white', contour_width=3, colormap='bwr').generate(tweets_all)
plt.imshow(wc, interpolation='bilinear')
plt.axis('off')
plt.show()
