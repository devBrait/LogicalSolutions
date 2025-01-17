SELECT pr.name 
FROM providers AS p 
JOIN products as pr ON pr.id_providers = p.id 
WHERE pr.amount >= 10 AND pr.amount <= 20 AND 
LEFT(p.name, 1) = 'P'
