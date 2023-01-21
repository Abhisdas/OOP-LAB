/*3. Write a program to allocate n memory locations dynamically to store integers. Input the
values and find the sum and average of the numbers.*/

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,sum=0;
    double avg=0;
    printf("Input the number of integers : ");
    scanf("%d",&n);
    int *num=(int*) malloc(n*sizeof(int));
    if(num==NULL)
    {
        printf("Memory not allocated!!");
        exit(0);
    }
    printf("Enter the numbers :\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    avg=(double)sum/n;
    printf("The sum of entered numbers is %d.\nThe average of entered numbers is %.2lf",sum,avg);
}