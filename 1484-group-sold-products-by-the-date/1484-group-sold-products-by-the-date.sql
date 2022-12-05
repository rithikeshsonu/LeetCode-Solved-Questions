# Write your MySQL query statement below
select sell_date,
count(distinct(product)) as num_sold,
#group_concat function concats all the items and separates them with comma
group_concat(distinct product order by product) as products
from Activities
group by sell_date 
order by sell_date