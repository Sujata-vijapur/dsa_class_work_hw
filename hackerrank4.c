#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void karan();

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    karan();
    return 0;
}

void karan()
{
    int i,j,y,n,s;
    i=2;
    j=2;
    y=0;
    s=0;
    scanf("%d",&n);
    if((n>1)&&(n<=70))
    {
        printf("Students with prime roll numbers = ");
        while(i<=n)
            {
                    while(j<i)
                    {
                        y=i%j;
                        if(y==0)
                            {
                                break;
                            }
                        else
                            j++;
                    }
                    j=2;
                    if((i==2)||(y!=0))
                    {
                        printf("%d ",i);
                        s=s+10;
                    }
                    i++;
            }
        printf("\nMoney collected = %d",s);
    }
    else
        printf("Invalid input");
}
