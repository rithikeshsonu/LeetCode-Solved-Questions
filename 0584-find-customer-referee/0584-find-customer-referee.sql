# Write your MySQL query statement below
select name from Customer
where
referee_id IS NULL OR NOT referee_id = 2