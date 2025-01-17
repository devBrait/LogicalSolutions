SELECT CASE WHEN position IN (1, 2, 3) THEN CONCAT('Podium: ', team) 
WHEN position IN (14, 15) THEN CONCAT('Demoted: ', team) 
END AS "name" FROM league WHERE position IN (1, 2, 3, 14, 15);