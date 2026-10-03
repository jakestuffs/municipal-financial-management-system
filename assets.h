#ifndef ASSETS_H
#define ASSETS_H

#define MAX_ASSET_NAME 50
#define MAX_LOCATION 50

typedef struct {
    int id;
    char name[MAX_ASSET_NAME];
    char location[MAX_LOCATION];
    double value;
} Asset;

void add_asset(Asset assets[], int *count);
void list_assets(const Asset assets[], int count);
int find_asset_by_id(const Asset assets[], int count, int id);
void search_asset(const Asset assets[], int count);

#endif
