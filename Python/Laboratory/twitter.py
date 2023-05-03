# Importing Tweepy and time
import tweepy
import time

# Credentials
api_key = "wtWBuY75kHpcluqpKvH7PAAVM"
api_secret = "07yDcSkMVBg4zHnk7cTTyCBtnoufLFfAlJ89zX22NTXpEh0OsQ"
bearer_token = r"AAAAAAAAAAAAAAAAAAAAABl9iwEAAAAAZ2EOmxeQD7GBqrsnVbt%2FfArkW0k%3DixXepBQXo2wauq3mbsKlqeoHn2YxcUwZfSM6tJO6VbbaYJhfrF"
access_token = "1396159306903408642-vtXGsQIaVF2NqGYsNlXub88bcwWYBw"
access_token_secret = "q68ROU0wXoLTML9dj6fuW1OZwB3xCx2ekPMObGTfGvCdx"

# Gainaing access and connecting to Twitter API using Credentials
client = tweepy.Client(bearer_token, api_key, api_secret, access_token, access_token_secret)

auth = tweepy.OAuth1UserHandler(api_key, api_secret, access_token, access_token_secret)
api = tweepy.API(auth)


# Bot searches for tweets containing certain keywords
class MyStream(tweepy.StreamingClient):

    # This function gets called when a tweet passes the stream
    def on_tweet(self, tweet):

        # Retweeting the tweet
        try:
            # Retweet
            client.retweet(api.get_status(id))

            # Printing Tweet
            print(tweet.text)

            # Delay
            #time.sleep(1)

        except Exception as error:
            # Error
            print(error)


# Creating Stream object
stream = MyStream(bearer_token=bearer_token)

# Adding terms to search rules
rule = tweepy.StreamRule("(#affiliate OR #marketing OR #earn) (-is:retweet -is:reply)") 
stream.add_rules(rule, dry_run=True)

# Starting stream
stream.filter()