# Write your MySQL query statement below
select r.contest_id,(round(count(r.user_id)*100/(select count(u.user_id) from Users as u),2)) as percentage
from Register as r
group by r.contest_id
order by percentage desc,contest_id asc;