// 20.12 Pyramid Programs

#include <stdio.h>
main()
{
    int i, j, k;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
                printf(" %d",i*i);
        }
        printf("\n");
    }
}
