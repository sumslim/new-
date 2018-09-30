#include <stdio.h>
int main()
{
    int i,j,arr[6][6];
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",((arr+i)+j));
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d",*((arr+i)+j));
        }
    }


}
