# MFMS Project A Testing

## Compile
gcc -Wall -Wextra -std=c11 main.c employees.c budget.c suppliers.c assets.c reports.c -o mfms

## Run
./mfms

## Tests
1. Enter an invalid main-menu choice and check that an error is displayed.
2. Display employees, add an employee, search for an employee, and check salary calculation.
3. Enter a negative salary and check that it is rejected.
4. Display budgets and check remaining budget.
5. Add a budget where expenditure is greater than allocation and check EXCEEDED BUDGET.
6. Display, add and search for a supplier.
7. Display, add and search for an asset.
8. Run all reports and compare the results with the stored data.
9. Select Exit and check that the program closes.

The expected result is that valid information is accepted, basic invalid values are rejected, searches work, calculations are correct, and the menus work correctly.
