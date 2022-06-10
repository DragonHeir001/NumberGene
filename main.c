#include <stdio.h>

int main() {
    printf("Insert_name_below:");
    char name[10];
    scanf("%s", &name);
    printf("Welcome, %s", name);
    return 0;
}
