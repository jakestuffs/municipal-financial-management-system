#include <stdio.h>
#include <string.h>
#include "employees.h"

static void read_line(char *buffer, int size)
{
    if (fgets(buffer, size, stdin) != NULL) {
        buffer[strcspn(buffer, "\n")] = '\0';
    }
}

void add_employee(Employee employees[], int *count)
{
    if (*count >= 100) {
        printf("Employee limit reached.\n");
        return;
    }

    printf("Employee ID: ");
    scanf("%d", &employees[*count].id);
    getchar();

    printf("Name: ");
    read_line(employees[*count].name, MAX_NAME);

    printf("Department: ");
    read_line(employees[*count].department, MAX_DEPARTMENT);

    printf("Salary: ");
    scanf("%lf", &employees[*count].salary);
    getchar();

    (*count)++;
    printf("Employee added successfully.\n");
}

void list_employees(const Employee employees[], int count)
{
    if (count == 0) {
        printf("No employees found.\n");
        return;
    }

    printf("\n--- Employees ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Department: %s | Salary: %.2f\n",
               employees[i].id,
               employees[i].name,
               employees[i].department,
               employees[i].salary);
    }
}

int find_employee_by_id(const Employee employees[], int count, int id)
{
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            return i;
        }
    }
    return -1;
}

void search_employee(const Employee employees[], int count)
{
    int id;

    printf("Enter employee ID: ");
    scanf("%d", &id);
    getchar();

    int index = find_employee_by_id(employees, count, id);

    if (index == -1) {
        printf("Employee not found.\n");
        return;
    }

    printf("ID: %d | Name: %s | Department: %s | Salary: %.2f\n",
           employees[index].id,
           employees[index].name,
           employees[index].department,
           employees[index].salary);
}
