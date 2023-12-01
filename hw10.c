#include <stdio.h>

struct country
{
    char name[50];
    char nation[50];
    int pop;
};

int main (void)
{
    struct country arr[3];
    int i;
    printf("Input three cities:\n");
    for (i = 0; i < 3; i++){
        printf("Name> " );
        scanf(" %[^\n]", arr[i].name);
        printf("Country> ");
        scanf(" %[^\n]", arr[i].nation);
        printf("Population > ");
        scanf("%d", &arr[i].pop);
        getchar();
    }
    printf("Printing the three cities: \n");
    for (i=0; i<3; i++){
        printf("%d. %s in %s with a population of %d people \n",i+1, arr[i].name, arr[i].nation, arr[i].pop);
    }
    return 0;
}