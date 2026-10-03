#include <stdio.h>
#include <string.h>
#include "suppliers.h"

static void read_line(char *buffer, int size)
{
    if (fgets(buffer, size, stdin) != NULL) {
        buffer[strcspn(buffer, "\n")] = '\0';
    }
}

void add_supplier(Supplier suppliers[], int *count)
{
    if (*count >= 100) {
        printf("Supplier limit reached.\n");
        return;
    }

    printf("Supplier ID: ");
    scanf("%d", &suppliers[*count].id);
    getchar();

    printf("Name: ");
    read_line(suppliers[*count].name, MAX_NAME);

    printf("Contact: ");
    read_line(suppliers[*count].contact, MAX_CONTACT);

    printf("Contract value: ");
    scanf("%lf", &suppliers[*count].contract_value);
    getchar();

    (*count)++;
    printf("Supplier added successfully.\n");
}

void list_suppliers(const Supplier suppliers[], int count)
{
    if (count == 0) {
        printf("No suppliers found.\n");
        return;
    }

    printf("\n--- Suppliers ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Contact: %s | Contract: %.2f\n",
               suppliers[i].id,
               suppliers[i].name,
               suppliers[i].contact,
               suppliers[i].contract_value);
    }
}

int find_supplier_by_id(const Supplier suppliers[], int count, int id)
{
    for (int i = 0; i < count; i++) {
        if (suppliers[i].id == id) {
            return i;
        }
    }
    return -1;
}

void search_supplier(const Supplier suppliers[], int count)
{
    int id;

    printf("Enter supplier ID: ");
    scanf("%d", &id);
    getchar();

    int index = find_supplier_by_id(suppliers, count, id);

    if (index == -1) {
        printf("Supplier not found.\n");
        return;
    }

    printf("ID: %d | Name: %s | Contact: %s | Contract: %.2f\n",
           suppliers[index].id,
           suppliers[index].name,
           suppliers[index].contact,
           suppliers[index].contract_value);
}
