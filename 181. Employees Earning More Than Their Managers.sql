SELECT Employee.name AS Employee 
FROM Employee
JOIN Employee AS e
ON Employee.managerId=e.id
WHERE Employee.salary>e.salary