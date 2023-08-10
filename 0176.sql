# Write your MySQL query statement below
SELECT  (
  SELECT DISTINCT salary
  From Employee
  ORDER BY salary DESC
  limit 1
  OFFSET 1
) AS SecondHighestSalary;
