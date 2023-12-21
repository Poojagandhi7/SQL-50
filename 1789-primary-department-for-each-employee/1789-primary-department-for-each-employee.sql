# Write your MySQL query statement below
# select employee_id,department_id from Employee where primary_flag='Y'
# union
# select employee_id,department_id
# from Employee
# group by employee_id
# having count(department_id) =1


select employee_id,department_id
from Employee
where primary_flag='Y' or (department_id,employee_id) in
(select department_id,employee_id 
from Employee 
group by employee_id
having count(department_id)=1);