# Write your MySQL query statement below
select e1.employee_id 
from Employees as e1
join Employees as e2
on e1.employee_id=e2.employee_id
where e2.manager_id not in (select employee_id from Employees) and
e1.employee_id in
(
select employee_id 
from Employees
where salary<30000)
order by e1.employee_id asc;