# MFMS Testing Documentation

## Build Test

Compile all source modules together:

```bash
gcc -Wall -Wextra -std=c11 main.c employees.c budget.c suppliers.c assets.c reports.c -o mfms
```

A successful build should produce the executable without compiler errors.

## Functional Tests

### Employee Module
- List the initial employees.
- Search for employee ID 101 and confirm John is displayed.
- Search for an unknown ID and confirm "Employee not found".
- Add a new employee and confirm the employee count increases.

### Budget Module
- List the initial department budgets.
- Confirm remaining budget equals allocated minus spent.
- Add a department budget and confirm it appears in the list.

### Supplier Module
- List the initial suppliers.
- Search for supplier ID 201.
- Search for an unknown supplier ID.
- Add a supplier and confirm it appears in the list.

### Asset Module
- List the initial assets.
- Search for asset ID 301.
- Search for an unknown asset ID.
- Add an asset and confirm it appears in the list.

### Reports Module
- Run the employee report and verify total and average salary calculations.
- Run the budget report and verify allocated, spent and remaining totals.
- Run the supplier report and verify total contract value.
- Run the asset report and verify total asset value.
- Run the system summary and verify all record counts.

## Expected Result

All menu options should execute without crashing, valid records should be displayed correctly, and calculated report values should match the stored data.
