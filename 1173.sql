# Write your MySQL query statement below
SELECT ROUND((
    SELECT COUNT(*)
    FROM Delivery
    WHERE customer_pref_delivery_date = order_date
) * 100 / COUNT(*), 2) AS immediate_percentage
FROM Delivery;
