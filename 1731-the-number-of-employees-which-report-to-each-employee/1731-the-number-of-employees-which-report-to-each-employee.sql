# Write your MySQL query statement below
select e2.employee_id, e2.name, count(e1.reports_to is not null) as reports_count, round(avg(e1.age),0) as average_age
from Employees as e1
join Employees as e2
on e1.reports_to = e2.employee_id
group by e1.reports_to
order by employee_id asc;

# select distinct employee_id, name, count(reports_to is not null) as reports_count, (select round(avg(age),0) from Employees where reports_to is not null) as average_age
# from Employees 
# group by reports_to
# having employee_id in (select reports_to from Employees)
# order by employee_id,average_age asc;


