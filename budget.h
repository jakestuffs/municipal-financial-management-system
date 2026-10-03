#ifndef BUDGET_H
#define BUDGET_H

#define MAX_DEPARTMENT 50

typedef struct {
    char department[MAX_DEPARTMENT];
    double allocated;
    double spent;
} DepartmentBudget;

void add_budget(DepartmentBudget budgets[], int *count);
void list_budgets(const DepartmentBudget budgets[], int count);
double budget_remaining(const DepartmentBudget *budget);
int find_budget(const DepartmentBudget budgets[], int count, const char department[]);

#endif
