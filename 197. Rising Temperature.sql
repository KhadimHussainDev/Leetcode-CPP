SELECT we.id
FROM Weather we
JOIN weather w
ON we.temperature>w.temperature AND DATEDIFF(we.recordDate , w.recordDate) = 1