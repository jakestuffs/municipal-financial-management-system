#include <stdio.h>
#include <string.h>
#include "assets.h"

static void read_line(char *buffer, int size)
{
    if (fgets(buffer, size, stdin) != NULL) {
        buffer[strcspn(buffer, "\n")] = '\0';
    }
}

void add_asset(Asset assets[], int *count)
{
    if (*count >= 100) {
        printf("Asset limit reached.\n");
        return;
    }

    printf("Asset ID: ");
    scanf("%d", &assets[*count].id);
    getchar();

    printf("Asset name: ");
    read_line(assets[*count].name, MAX_ASSET_NAME);

    printf("Location: ");
    read_line(assets[*count].location, MAX_LOCATION);

    printf("Value: ");
    scanf("%lf", &assets[*count].value);
    getchar();

    (*count)++;
    printf("Asset added successfully.\n");
}

void list_assets(const Asset assets[], int count)
{
    if (count == 0) {
        printf("No assets found.\n");
        return;
    }

    printf("\n--- Assets ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Location: %s | Value: %.2f\n",
               assets[i].id,
               assets[i].name,
               assets[i].location,
               assets[i].value);
    }
}

int find_asset_by_id(const Asset assets[], int count, int id)
{
    for (int i = 0; i < count; i++) {
        if (assets[i].id == id) {
            return i;
        }
    }
    return -1;
}

void search_asset(const Asset assets[], int count)
{
    int id;

    printf("Enter asset ID: ");
    scanf("%d", &id);
    getchar();

    int index = find_asset_by_id(assets, count, id);

    if (index == -1) {
        printf("Asset not found.\n");
        return;
    }

    printf("ID: %d | Name: %s | Location: %s | Value: %.2f\n",
           assets[index].id,
           assets[index].name,
           assets[index].location,
           assets[index].value);
}
