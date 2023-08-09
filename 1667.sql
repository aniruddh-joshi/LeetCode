# Write your MySQL query statement below

/*CONCAT = to merge.
UPPER = to uppercase the letter.
SUBSTR = to find the substring.
LOWER = to lowercase the letter.
ORDER BY = to order in ascending order by user_id.*/

SELECT user_id , CONCAT(UPPER(SUBSTR(name,1,1)),LOWER(SUBSTR(name,2))) AS name
From Users 
ORDER BY user_id
