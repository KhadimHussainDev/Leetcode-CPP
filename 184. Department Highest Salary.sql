SELECT Department.name Department,Employee.name Employee,salary Salary
FROM Employee
JOIN Department
ON departmentId=Department.id
WHERE salary=(SELECT MAX(salary) From Employee e WHERE e.DepartmentId=Department.id)