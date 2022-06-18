#include <stdio.h>

int main()
{
    printf("Enter elements of an array :\n"); 
    int a[3][4],row[3]={0},column[4]={0};
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            scanf("%d",&a[i][j]);      //enter array elements
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            row[i]+=a[i][j];     //summation of each row
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            column[j]+=a[i][j];    //summation of each column
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("%d\n",row[i]);
    }
    printf("\n");
    for(int i=0;i<4;i++)
    {
        printf("%d ",column[i]);
    }

    return 0;
}


