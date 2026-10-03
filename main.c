#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "suppliers.h"
#include "assets.h"
#include "reports.h"

static void show_menu(void)
{
    printf("\n===== MUNICIPAL FINANCIAL MANAGEMENT SYSTEM =====\n");
    printf("1. Add employee\n");
    printf("2. List employees\n");
    printf("3. Search employee\n");
    printf("4. Add department budget\n");
    printf("5. List budgets\n");
    printf("6. Add supplier\n");
    printf("7. List suppliers\n");
    printf("8. Search supplier\n");
    printf("9. Add asset\n");
    printf("10. List assets\n");
    printf("11. Search asset\n");
    printf("12. Employee report\n");
    printf("13. Budget report\n");
    printf("14. Supplier report\n");
    printf("15. Asset report\n");
    printf("16. System summary\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
}

int main(void)
{
    Employee employees[100] = {
        {101, "John", "Finance", 15000.00},
        {102, "Mary", "IT", 18000.00},
        {103, "Peter", "HR", 12000.00}
    };
    int employee_count = 3;

    DepartmentBudget budgets[50] = {
        {"Finance", 100000.00, 75000.00},
        {"IT", 150000.00, 90000.00},
        {"HR", 80000.00, 50000.00}
    };
    int budget_count = 3;

    Supplier suppliers[100] = {
        {201, "NamTech Supplies", "0812345678", 45000.00},
        {202, "City Office Solutions", "0855555555", 30000.00}
    };
    int supplier_count = 2;

    Asset assets[100] = {
        {301, "Dell OptiPlex", "Finance Office", 12000.00},
        {302, "Toyota Hilux", "Transport Department", 350000.00}
    };
    int asset_count = 2;

    int choice;

    do {
        show_menu();

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n') {
            }
            continue;
        }
        getchar();

        switch (choice) {
            case 1: add_employee(employees, &employee_count); break;
            case 2: list_employees(employees, employee_count); break;
            case 3: search_employee(employees, employee_count); break;
            case 4: add_budget(budgets, &budget_count); break;
            case 5: list_budgets(budgets, budget_count); break;
            case 6: add_supplier(suppliers, &supplier_count); break;
            case 7: list_suppliers(suppliers, supplier_count); break;
            case 8: search_supplier(suppliers, supplier_count); break;
            case 9: add_asset(assets, &asset_count); break;
            case 10: list_assets(assets, asset_count); break;
            case 11: search_asset(assets, asset_count); break;
            case 12: employee_report(employees, employee_count); break;
            case 13: budget_report(budgets, budget_count); break;
            case 14: supplier_report(suppliers, supplier_count); break;
            case 15: asset_report(assets, asset_count); break;
            case 16:
                system_summary(employees, employee_count,
                               budgets, budget_count,
                               suppliers, supplier_count,
                               assets, asset_count);
                break;
            case 0:
                printf("Exiting MFMS. Goodbye.\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
