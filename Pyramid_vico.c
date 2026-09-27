#include<stdio.h>
int main()
    {
        int n;
        scanf("%d",&n);
        for(int r=1;r<=n;r++)
        {
            for(intsp=1;sp<=n-r;sp++)
            {
                printf(" ");
            }
        }
        for(int st=1;st<=2*r-1;st++)
        {
            printf("*");
        }
        printf("\n");
    }

