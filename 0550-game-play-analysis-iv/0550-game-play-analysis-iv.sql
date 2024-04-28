# Write your MySQL query statement below
select round(count(a2.player_id)/count(a1.player_id),2) as fraction
from Activity as a1
left outer join Activity as a2
on a1.player_id = a2.player_id
and DATEDIFF(A2.event_date,A1.event_date) = 1
where (a1.event_date,a1.player_id) in (
    select min(event_date),player_id
    from Activity
    group by player_id
)