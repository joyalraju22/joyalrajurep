#include <stdio.h>
void main() 
{
    int i,j,r,c;
    printf("enter the nuber of row and columns of matrix");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("enter the values");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the matrix is :");
    for(i=0;i<r;i++)
    {     printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d",arr[i][j]);
        }
    }
     
}
