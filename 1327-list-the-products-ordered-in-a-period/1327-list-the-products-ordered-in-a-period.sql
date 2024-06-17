# Write your MySQL query statement below
WITH cte AS (SELECT * FROM Orders WHERE Month(order_date)=2 AND Year(order_date)=2020)

SELECT a.product_name, SUM(b.unit) as unit
FROM Products as a
RIGHT JOIN 
cte as b
ON a.product_id=b.product_id
GROUP BY b.product_id
HAVING SUM(b.unit)>=100;
