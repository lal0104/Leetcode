# Write your MySQL query statement below
SELECT id, count(id) as num
FROM
(SELECT requester_id as id FROM RequestAccepted
UNION ALL
SELECT accepter_id as id FROM RequestAccepted)as a
GROUP BY id
ORDER BY count(id) DESC LIMIT 1;



