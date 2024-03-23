SELECT p.name, pr.name, p.price FROM products AS p
INNER JOIN providers AS pr ON pr.id = p.id_providers
INNER JOIN categories AS c ON c.id = p.id_categories
WHERE p.price > 1000 AND c.name = 'Super Luxury';
