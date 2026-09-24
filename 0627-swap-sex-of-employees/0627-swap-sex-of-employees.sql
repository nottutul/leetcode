# Write your MySQL query statement below
UPdATE Salary SET sex = 
CASE
    WHEN sex = 'f' THEN 'm'
    WHEN sex = 'm' THEN 'f'
END;
