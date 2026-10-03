#include <stdio.h>
#include "reports.h"

void employee_report(const Employee employees[], int count)
{
    double total_salary = 0.0;

    for (int i = 0; i < count; i++) {
        total_salary += employees[i].salary;
    }

    printf("\n--- Employee Report ---\n");
    printf("Number of employees: %d\n", count);
    printf("Total salaries: %.2f\n", total_salary);

    if (count > 0) {
        printf("Average salary: %.2f\n", total_salary / count);
    }
}

void budget_report(const DepartmentBudget budgets[], int count)
{
    double total_allocated = 0.0;
    double total_spent = 0.0;

    for (int i = 0; i < count; i++) {
        total_allocated += budgets[i].allocated;
        total_spent += budgets[i].spent;
    }

    printf("\n--- Budget Report ---\n");
    printf("Departments with budgets: %d\n", count);
    printf("Total allocated: %.2f\n", total_allocated);
    printf("Total spent: %.2f\n", total_spent);
    printf("Total remaining: %.2f\n", total_allocated - total_spent);
}

void supplier_report(const Supplier suppliers[], int count)
{
    double total_contracts = 0.0;

    for (int i = 0; i < count; i++) {
        total_contracts += suppliers[i].contract_value;
    }

    printf("\n--- Supplier Report ---\n");
    printf("Number of suppliers: %d\n", count);
    printf("Total contract value: %.2f\n", total_contracts);
}

void asset_report(const Asset assets[], int count)
{
    double total_value = 0.0;

    for (int i = 0; i < count; i++) {
        total_value += assets[i].value;
    }

    printf("\n--- Asset Report ---\n");
    printf("Number of assets: %d\n", count);
    printf("Total asset value: %.2f\n", total_value);
}

void system_summary(const Employee employees[], int employee_count,
                    const DepartmentBudget budgets[], int budget_count,
                    const Supplier suppliers[], int supplier_count,
                    const Asset assets[], int asset_count)
{
    printf("\n========== SYSTEM SUMMARY ==========\n");
    printf("Employees : %d\n", employee_count);
    printf("Budgets   : %d\n", budget_count);
    printf("Suppliers : %d\n", supplier_count);
    printf("Assets    : %d\n", asset_count);
    printf("=====================================\n");
}
