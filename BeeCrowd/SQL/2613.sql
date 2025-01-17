SELECT m.id, m.name FROM movies as m
INNER JOIN prices as p ON p.id = m.id_prices
WHERE p.value < 2.00;
