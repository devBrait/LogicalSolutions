SELECT c.id, c.name
FROM customers c
LEFT JOIN locations l ON c.id = l.id_customers
WHERE l.id_customers IS NULL
ORDER BY c.id;
