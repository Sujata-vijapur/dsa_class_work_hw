#include<stdio.h>
#define add (int x,int y);
main()
{
    int x,y;
    scanf("%d","%d",&x,&y);
    add(x,y);

}
void add(intx,inty)
{
    int r;
    r=x+y;
    printf("%d",r);
}
