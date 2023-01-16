SELECT DISTINCT Person.email AS Email
FROM Person
JOIN Person p
ON Person.email=p.email AND Person.id<>p.id