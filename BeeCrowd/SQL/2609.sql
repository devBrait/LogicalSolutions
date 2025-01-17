SELECT c.name, SUM(p.amount) as sum
FROM products as p
INNER JOIN categories as c ON c.id = p.id_categories
GROUP BY c.name;

