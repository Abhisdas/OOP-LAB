/*1. Write a program to create a structure that stores the name,roll and 3 subject 
marks of a student. Input the details of a student and display all the details 
along with average mark by calling a user defined function where the structure variable
is passed as an argument.*/

#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    int marks[3];
};
void display(struct student a)
{
    float avg=0;
    int i;
    for(i=0;i<3;i++)
    avg+=a.marks[i];
    avg/=3.0;
    printf("Roll - %d\nName - %s\n",a.roll,a.name);
    printf("Marks are :\n");
    for(i=0;i<3;i++)
    printf("%d ",a.marks[i]);
    printf("\nAverage mark - %.2lf\n",avg);
}
void main()
{
    struct student s;
    printf("Enter roll no. , name and marks in 3 subjects respectively  :\n");
    scanf("%d",&s.roll);
    scanf("%s",&s.name);
    int i=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&s.marks[i]);
    }
    display(s);
}