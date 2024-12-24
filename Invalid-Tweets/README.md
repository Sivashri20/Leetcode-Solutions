Intuition

Length Calculation: We need to determine the length of the content field for each tweet.

Validation: A tweet is invalid if its content length is greater than 15.

Simple Condition: You can use the LENGTH() function in SQL to calculate the length of a string. Then, filter the rows where the length exceeds 15.

Approach

Step 1 - Use the LENGTH() function: The LENGTH() function in SQL returns the number of characters in a string (excluding trailing spaces). It will give us the number of characters in the content column for each tweet.

Step 2 - Apply the condition: We need to check if the length is greater than 15.

Step 3 - Select tweet_id: We need to return only the tweet_id for the invalid tweets.
