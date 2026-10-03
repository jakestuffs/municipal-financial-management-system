#include <stdio.h>
#include <string.h>
#include "budget.h"

static void read_line(char *buffer, int size)
{
    if (fgets(buffer, size, stdin) != NULL) {
        buffer[strcspn(buffer, "\n")] = '\0';
    }
}

void add_budget(DepartmentBudget budgets[], int *count)
{
    if (*count >= 50) {
        printf("Budget limit reached.\n");
        return;
    }

    printf("Department: ");
    read_line(budgets[*count].department, MAX_DEPARTMENT);

    printf("Allocated amount: ");
    scanf("%lf", &budgets[*count].allocated);

    printf("Spent amount: ");
    scanf("%lf", &budgets[*count].spent);
    getchar();

    (*count)++;
    printf("Budget added successfully.\n");
}

double budget_remaining(const DepartmentBudget *budget)
{
    return budget->allocated - budget->spent;
}

void list_budgets(const DepartmentBudget budgets[], int count)
{
    if (count == 0) {
        printf("No budgets found.\n");
        return;
    }

    printf("\n--- Department Budgets ---\n");
    for (int i = 0; i < count; i++) {
        printf("Department: %s | Allocated: %.2f | Spent: %.2f | Remaining: %.2f\n",
               budgets[i].department,
               budgets[i].allocated,
               budgets[i].spent,
               budget_remaining(&budgets[i]));
    }
}

int find_budget(const DepartmentBudget budgets[], int count, const char department[])
{
    for (int i = 0; i < count; i++) {
        if (strcmp(budgets[i].department, department) == 0) {
            return i;
        }
    }
    return -1;
}
