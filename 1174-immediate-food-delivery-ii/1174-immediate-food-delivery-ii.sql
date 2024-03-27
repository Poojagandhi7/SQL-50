






























Select round(avg(order_date = customer_pref_delivery_date)*100, 2) as immediate_percentage
from Delivery
where (customer_id, order_date) in (
  Select customer_id, min(order_date) 
  from Delivery
  group by customer_id
);




# Write your MySQL query statement below

# select sum(if(d.order_date = d.customer_pref_delivery_date,1 ,0))/count(d.customer_id)*100 as immediate_percentage 
# from Delivery as d
# WHERE d.customer_id = (select min(delivery_id) from Delivery where customer_id=d.delivery_id);


# SELECT ROUND(SUM(IF(d.order_date = d.customer_pref_delivery_date, 1, 0)) / COUNT(d.customer_id) * 100, 2) AS immediate_percentage
# FROM Delivery AS d
# WHERE d.delivery_id = (
#     SELECT MIN(d2.delivery_id)
#     FROM Delivery AS d2
#     WHERE d2.customer_id = d.customer_id
# );
