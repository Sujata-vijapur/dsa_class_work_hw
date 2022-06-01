#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void f();

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    f();
    return 0;
}

void f()
{
    int n,m,i,s,num;
    i=1;
    m=0;
    num=0;
    s=0;
    scanf("%d",&n);
    if(n<1)
        printf("Invalid input.\n");
    else
    {
        while(i<=n)
        {
            scanf("%d",&m);
            if(m>0)
            {
                s+=m;
                num++;
            }
            else
                s=s;
            if(s>999)
            {
                break;
            }
            else
            {
                i++;
            }
        }
        printf("Sum is %d.\n",s);
        printf("Numbers added %d.",num);
    }
}
