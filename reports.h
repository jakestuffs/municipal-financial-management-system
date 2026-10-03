#ifndef REPORTS_H
#define REPORTS_H

#include "employees.h"
#include "budget.h"
#include "suppliers.h"
#include "assets.h"

void employee_report(const Employee employees[], int count);
void budget_report(const DepartmentBudget budgets[], int count);
void supplier_report(const Supplier suppliers[], int count);
void asset_report(const Asset assets[], int count);
void system_summary(const Employee employees[], int employee_count,
                    const DepartmentBudget budgets[], int budget_count,
                    const Supplier suppliers[], int supplier_count,
                    const Asset assets[], int asset_count);

#endif
