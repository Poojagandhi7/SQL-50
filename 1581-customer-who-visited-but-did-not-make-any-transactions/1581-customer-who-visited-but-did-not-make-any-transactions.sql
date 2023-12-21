# Write your MySQL query statement below
# SELECT  customer_id, count(*) AS count_no_trans FROM Visits 
# WHERE visit_id NOT IN (SELECT visit_id FROM Transactions ) 
# GROUP BY customer_id

select v.customer_id , COUNT(*) as count_no_trans
from Visits as v
left join Transactions as t
on v.visit_id = t.visit_id
where t.visit_id is null
group by v.customer_id