SELECT c.name FROM customers AS c 
JOIN legal_person AS lp ON lp.id_customers = c.id
