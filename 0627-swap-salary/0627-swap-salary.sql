# Write your MySQL query statement below
UPDATE salary set sex = (case when sex = 'm' then 'f' when sex = 'f' then 'm' END)
