#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node *NODE;
NODE head = NULL;
NODE getnode()
{
    NODE newn;
    newn = (struct node *)malloc(sizeof(struct node));
    if (newn == NULL)
    {
        printf("Memody allocation error !");
        exit(0);
    }
    printf("Enter the data :");
    scanf("%d", &newn->data);
    newn->next = NULL;
    return newn;
}

NODE Insert_at_end(NODE head)
{
    NODE cur;
    NODE t;
    t = getnode();
    if (head == NULL)
    {
        head = t;
        return head;
    }
    else
    {
        cur = head;
        while (cur->next != NULL)
        {
            cur = cur->next;
        }
        cur->next =t;
        return head;
    }
}

NODE Insert_at_begin(NODE head)
{
    NODE temp = getnode();
    if (head == NULL)
    {
        head = temp;
        return head;
    }
    else
    {
        temp->next = head;
        return temp;
    }
}
void display(NODE head)
{
    NODE cur;
    if (head == NULL)
    {
        printf("List is empty !\n");
    }
    else
    {
        cur = head;
        printf("The lisked listt is :\n");
        while (cur->next != NULL)
        {
            printf("%d->", cur->data);
            cur = cur->next;
        }
    }
}

int main()
{
    int ch, n;
    NODE t = NULL;
    while (1)
    {
        printf("\nPress 1 to get NODE \tPress 2 to Insert at begin \tPress 3 To Insert at end \tpress 4 to display the list\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            t = getnode();
            break;
        case 2:
            t = Insert_at_begin(t);
            break;
        case 3:
            t = Insert_at_end(t);
            break;
        case 4:
            display(t);
            break;
        }
    }

    return 0;
}