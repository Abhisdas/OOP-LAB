//2. WAP to multiply two matrix and display its transpose

#include <stdio.h>
void main()
{
    int r1,c1;
    printf("Enter number of rows & columns respectively :");
    scanf("%d %d",&r1,&c1);
    int i=0,j=0,k=0,mat1[r1][c1];
    printf("Enter the elements of first matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Entered matrix is :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    int r2=c1,c2;
    printf("rows in second matrix = %d\n",r2);
    printf("Enter number of columns :");
    scanf("%d",&c2);
    int mat2[r2][c2];
    printf("Enter the elements of second matrix :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Entered matrix is :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    int res[r1][c2];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            res[i][j]=0;
            for(k=0;k<c2;k++)
            {
                res[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    printf("The multiplication of two matrix are :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        printf("%d ",res[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("Transpose of multiplication of two matrices is:\n");
    for(i=0;i<c2;i++)
    {
        for(j=0;j<r1;j++)
        {
            printf("%d ",res[j][i]);
        }
        printf("\n");
    }
}