# Write your MySQL query statement below
select if(income<20000,'Low Salary',0) as category,count(account_id) as accounts_count 
from Accounts
where income<20000
UNION
SELECT IF(income >= 20000 AND income <= 50000,'Average Salary','Average Salary') AS category,count(account_id) as accounts_count 
FROM Accounts
WHERE income >= 20000 AND income <= 50000
UNION
select if(income>50000,'High Salary',0) as category,count(account_id) as accounts_count 
from Accounts
where income>50000
