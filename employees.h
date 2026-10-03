#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#define MAX_NAME 50
#define MAX_DEPARTMENT 50

typedef struct {
    int id;
    char name[MAX_NAME];
    char department[MAX_DEPARTMENT];
    double salary;
} Employee;

void add_employee(Employee employees[], int *count);
void list_employees(const Employee employees[], int count);
int find_employee_by_id(const Employee employees[], int count, int id);
void search_employee(const Employee employees[], int count);

#endif
