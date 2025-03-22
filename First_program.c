#include<stdio.h>
int main()
{
    int age,roll_number,percentage;
    float height,mark,total_mark;
    char name[50];
    printf("Enter the name of the student:");
    scanf("%s",name);
    printf("Enter the age of the student:");
    scanf("%d",&age);
    printf("Enter the rollnmber of the student:");
    scanf("%d",&roll_number);
    printf("Enter the height of the student:");
    scanf("%f",&height);
    printf("Enter the total mark of all subject");
    scanf("%f",&total_mark);
    printf("Enter the mark of the student:");
    scanf("%f",&mark);
    printf("Age of student:%d\n",age);
    printf("Rollnumber of student:%d\n",roll_number);
    printf("Heigth of student is:%f\n",height);
    printf("The mark of student is:%f\n",mark);
    percentage=mark/total_mark*100;
    printf("The percentage of the student is :%d\n",percentage);
    if(percentage>=90)
    {
        printf("The grade is A+\n");
        printf("Excellent keep it up");
    }
    if(percentage<90)
    {
        printf("The grade is A\n");
        printf("Best");
    }
    if(percentage<=80)
    {
        printf("Grade is B\n");
        printf("Satisfactory");
    }
    else if(percentage<=60)
    {
        printf("The grade is pass\n");
        printf("Improve your performance");
    }
return 0;
}
