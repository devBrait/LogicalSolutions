SELECT p.name, pr.name, c.name FROM products AS p
INNER JOIN providers AS pr ON pr.id = p.id_providers
INNER JOIN categories AS c ON c.id = p.id_categories
WHERE pr.name = 'Sansul SA' AND c.name = 'Imported';
