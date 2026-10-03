#ifndef SUPPLIERS_H
#define SUPPLIERS_H

#define MAX_NAME 50
#define MAX_CONTACT 30

typedef struct {
    int id;
    char name[MAX_NAME];
    char contact[MAX_CONTACT];
    double contract_value;
} Supplier;

void add_supplier(Supplier suppliers[], int *count);
void list_suppliers(const Supplier suppliers[], int count);
int find_supplier_by_id(const Supplier suppliers[], int count, int id);
void search_supplier(const Supplier suppliers[], int count);

#endif
