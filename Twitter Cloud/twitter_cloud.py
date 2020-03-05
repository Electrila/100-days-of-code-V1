import re
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from os import path
from wordcloud import WordCloud, STOPWORDS, ImageColorGenerator
from PIL import Image
import GetOldTweets3 as got

# Parameters used to fetch tweets
# Dates must be in yyyy-mm-dd format
username = 'realDonaldTrump'
date_from = '2019-01-01'
date_to = '2020-03-03'
count = 100

# Create object for search criteria
tweet_criteria = got.manager.TweetCriteria().setUsername(username)\
                                            .setSince(date_from)\
                                            .setUntil(date_to)\
                                            .setMaxTweets(count)

# Obtain tweets and convert returned text into DataFrame
tweets_df = pd.DataFrame([[tweet.text] for tweet in got.manager.TweetManager.getTweets(tweet_criteria)], columns=['text'])

# Import and add to pre-loaded list of stopwords (if necessary)
stopwords = set(STOPWORDS)

# wordcloud = WordCloud(stopwords=stopwords).generate(tweets_df)
# plt.imshow(wordcloud, interpolation='bilinear')
# plt.axis('off')
# plt.show()