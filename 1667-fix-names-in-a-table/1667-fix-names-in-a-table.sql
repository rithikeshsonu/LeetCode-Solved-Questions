# Write your MySQL query statement below
SELECT user_id,
Concat(UPPER(SUBSTR(name,1,1)), LOWER(SUBSTR(name,2,length(name)))) as name
from users order by user_id