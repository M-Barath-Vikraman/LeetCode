# Write your MySQL query statement below
SELECT Employee.name,Bonus.bonus FROM Employee Left join Bonus on Employee.empid =Bonus.empid
WHERE bonus<1000 OR BONUS IS NULL ;