#include <stdio.h>
#include <stdlib.h>
struct employee
{
    int id;
    char name[50];
};
void read(struct employee *e1, int n);
void display(struct employee *e1, int n);

int main()
{
    int n;
    struct employee *e1;
    printf("Enter total number of employees :");
    scanf("%d", &n);
    e1 = (struct employee *)malloc(sizeof(struct employee) * n);
    read(e1, n);
    display(e1, n);
    free(e1);

    return 0;
}
void read(struct employee *e1, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d employee details:", i + 1);
        scanf("%d%s", &(e1 + i)->id,(e1 + i)->name);
    }
}
void display(struct employee *e1, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d Employee Id : %d\n", i + 1, (e1 + i)->id);
        printf(" %d Employee Name :%s\n", i + 1, (e1+ i)->name);
    }
}
