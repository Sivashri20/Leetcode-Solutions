# Intuition

1.Articles should be excluded if they are only viewed by their author (i.e., where viewer_id = author_id).
2.The query must identify rows where the viewer_id is not equal to the author_id, as these represent views from other users.

# Approach

1.Filter Rows Using WHERE:

Identify rows where viewer_id != author_id. This excludes cases where the author views their own article.
Select Unique article_id:

2.Use DISTINCT to ensure each article_id is listed only once in the output, even if the article has multiple views from different users.

3.Use order by colunmname asc/desc
