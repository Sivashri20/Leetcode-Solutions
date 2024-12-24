Intuition

The problem involves joining two tables (Employees and EmployeeUNI) to retrieve a unique identifier (unique_id) for each employee. The key point is that not all employees have a corresponding entry in the EmployeeUNI table, so for unmatched cases, we need to return NULL for the unique_id. This can be effectively handled using a LEFT JOIN, which ensures all rows from the Employees table are included, regardless of whether there's a match in the EmployeeUNI table.

Approach

1.Understand the Relationship Between Tables:

The Employees table contains all employees' information.
The EmployeeUNI table maps some employees (id) to a unique_id.
We want to match rows based on the id column in both tables.

2.Use a LEFT JOIN:

Since we need to include all employees, even those without a unique_id, the LEFT JOIN is ideal.
This join keeps all rows from the Employees table and adds matching unique_id values from the EmployeeUNI table. If no match is found, unique_id will be NULL.

3.Select Relevant Columns:

We select the unique_id from the EmployeeUNI table and the name from the Employees table.
