# Write your MySQL query statement below
# select num
# FROM MyNumbers 
# WHERE
# ORDER BY num DESC LIMIT 1;
SELECT MAX(num) AS num
FROM  MyNumbers
WHERE num IN
   ( SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num) = 1
) ;
