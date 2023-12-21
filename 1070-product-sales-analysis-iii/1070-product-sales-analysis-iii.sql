# Write your MySQL query statement below
select distinct p.product_id,s.year as first_year,s.quantity,s.price
from Sales as s
left join Product as p
on s.product_id=p.product_id
where (s.year,s.product_id) in (
select min(year) , product_id
from Sales 
group by product_id);