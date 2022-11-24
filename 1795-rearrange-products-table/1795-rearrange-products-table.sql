# Write your MySQL query statement below
select product_id, 'store1' as store, store1 as price from PRODUCTS
where store1 is not null
UNION
select product_id, 'store2' as store, store2 as price from PRODUCTS
where store2 is not null
UNION
select product_id, 'store3' as store, store3 as price from PRODUCTS
where store3 is not null
