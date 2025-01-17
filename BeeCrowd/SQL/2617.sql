SELECT pr.name, pv.name
FROM products pr
JOIN providers pv ON pr.id_providers = pv.id
WHERE pv.name = 'Ajax SA';
