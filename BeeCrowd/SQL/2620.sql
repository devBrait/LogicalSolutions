SELECT c.name, od.id FROM customers AS c
INNER JOIN orders AS od ON c.id = od.id_customers
WHERE od.orders_date >= '2016-01-01' AND od.orders_date <= '2016-06-30';
