#include<stdio.h>
#include<stdlib.h>
struct node

{
int rollno;
char name[20];
struct Node*next;
};
struct Node* getNode();
void freeNode (struct Node*);
void readinfo(struct Node*);
void displayinfo(struct Node*);

int main()

{
    struct Node *first ;
    struct Node *createright()
    {
        char ch;
        struct Node *first,*nw,*prev;
        first=nw=NULL;
        do
        {
            prev=nw;
            nw=getNode();
            readinfo(nw);
            if(first==NULL)
                first=nw;
            else
                prev->next=nw;
            printf("\n Any more node (Y/N)?");
            ch=getchar();
        }
        while (ch='Y');
        nw->next=NULL;
        return(first);
    }
};




