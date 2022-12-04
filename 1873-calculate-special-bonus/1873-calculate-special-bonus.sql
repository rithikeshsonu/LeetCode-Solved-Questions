# Write your MySQL query statement below
select employee_id,
case 
    when employee_id % 2 != 0 and name like 'M%' then salary = 0
    when employee_id % 2 = 0 then salary = 0
    ELSE salary
END as bonus
from Employees 
order by employee_id