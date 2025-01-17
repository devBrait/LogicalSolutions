SELECT c.name, r.rentals_date FROM customers as c
INNER JOIN rentals as r ON c.id = r.id_customers
WHERE EXTRACT(MONTH FROM r.rentals_date) = 9;