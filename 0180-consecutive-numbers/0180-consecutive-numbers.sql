# SELECT distinct(t1.num) as ConsecutiveNums 
# FROM logs t1, logs t2 , logs t3
# WHERE t1.id=t2.id+1 AND t2.id=t3.id+1 AND t1.num=t2.num AND t2.num=t3.num;


select distinct l1.num as ConsecutiveNums
from Logs l1,Logs l2,Logs l3
where l1.id=l2.id+1 and l2.id=l3.id+1 and l1.num=l2.num and l2.num=l3.num;