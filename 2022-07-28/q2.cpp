/*2. In the student structure mentioned in question 1 input the details of two students.
Write a user defined function that compares between the two students and returns the details
of that student who has scored the higher average mark. Display all the details that 
student after receiving the return value.*/

#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    int marks[3];
    double avg;
};
struct student compare(struct student a[])
{
    if(a[0].avg>a[1].avg)
    {
        return a[0];
    }
    else
    {
        return a[1];
    }
}
void main()
{
    struct student s[2],res={0," ",0,0,0};
    int i;
    printf("Enter the roll, name and marks of 3 subjects respectively for first student:\n");
    scanf("%d %s",&s[0].roll,&s[0].name);
    for(i=0;i<3;i++)
    scanf("%d",&s[0].marks[i]);
    double sum=0;
    for(i=0;i<3;i++)
    sum+=s[0].marks[i];
    s[0].avg=sum/3;
    printf("Enter the roll, name and marks of 3 subjects respectively for first student:\n");
    scanf("%d %s",&s[1].roll,&s[1].name);
    for(i=0;i<3;i++)
    scanf("%d",&s[1].marks[i]);
    sum=0;
    for(i=0;i<3;i++)
    sum+=s[1].marks[i];
    s[1].avg=sum/3;
    res = compare(s);
    printf("Roll - %d\nName - %s\n",res.roll,res.name);
    printf("Marks are :\n");
    for(i=0;i<3;i++)
    printf("%d ",res.marks[i]);
    printf("\nAverage mark - %.2lf\n",res.avg);
}