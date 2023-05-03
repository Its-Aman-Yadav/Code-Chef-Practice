# Importing all modules/packages/libraries
import tweepy
from textblob import TextBlob
import time

# Initialization
auth = tweepy.OAuthHandler("wtWBuY75kHpcluqpKvH7PAAVM", "07yDcSkMVBg4zHnk7cTTyCBtnoufLFfAlJ89zX22NTXpEh0OsQ")
auth.set_access_token("1396159306903408642-vtXGsQIaVF2NqGYsNlXub88bcwWYBw", "q68ROU0wXoLTML9dj6fuW1OZwB3xCx2ekPMObGTfGvCdx")
api = tweepy.API(auth)

# Getting Bot ID
bot_id = int(api.get_user())

mention_id = 1

# Retweet Bot with Mentions
while True:
    mentions = api.mentions_timeline(since_id=mention_id)
    for mention in mentions:
        print("Mention Tweet found!")
        print(f"MENTION: {mention.author.screen_name} - {mention.text}")
        mention_id = mention.id
        mention_analysis = TextBlob(mention.text)
        mention_analysis_score = mention_analysis.sentiment.polarity
        print(f"Tweet has polarity score of {mention_analysis_score}")
        if mention.in_reply_to_status_id is None and mention.author.id != bot_id:
            if mention_analysis_score >= 0.3 and not mention.retweeted:
                try:
                    print("trying retweet...")
                    api.retweet(mention.id)
                    print("Tweet successfully retweeted!\n")
                except Exception as err:
                    print(err)
            else:
                print("Tweet will not be retweeted.\n")
    time.sleep(15)