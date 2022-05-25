#include <stdio.h>
#include <conio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    int number_present;
    int number_absent;
    int unit_test;
    int mock_prac;
    char grade[5];
};

void cal_grade(struct student *st,int i)
{
    int unit,mock;
    char *grades;
    unit=st[i].unit_test;
    mock=st[i].mock_prac;
    if(unit<25 || mock<10)
      grades ="FAil";
    else
      grades ="Pass";
    strcpy(st[i].grade, grades);  
}
void main()
{
    struct student s[10];
    int i, n;
    char grades[5];
    printf("***************************************************************************\n");
    printf("\t\t\tStudent Attendance System\n");
    printf("***************************************************************************\n");
    printf("\t\t\tEnter the data of the student\n\n");
    printf("Enter the number of data entries=");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n\nEnter the rollno: ");
        scanf("%d", &s[i].rollno);
        printf("Enter the name: ");
        scanf("%s", &s[i].name);
        printf("Enter the absent days: ");
        scanf("%d", &s[i].number_absent);
        s[i].number_present = 25 - s[i].number_absent;
        printf("Enter the Prelim Performance Marks(Out of 70): ");
        scanf("%d", &s[i].unit_test);
        printf("Enter the Mock Practical(Out of 30): ");
        scanf("%d", &s[i].mock_prac);
        cal_grade(&s[0],i);

    }
    printf("\n\n************** Data for student **************\n\n");
    for (i = 0; i < n; i++)
    {
        printf("\t\t\t\t\t\t#Rollno=%d\t\n", s[i].rollno);
        printf("Name=%s\n\n", s[i].name);
        printf("Total present days = %d\n", s[i].number_present);
        printf("Total absent days = %d\n", s[i].number_absent);
        printf("Prelim Performance is: %d\n",s[i].unit_test);
        printf("Marks of Mock practical: %d",s[i].mock_prac);
        printf("\t\t\t Grade = %s\t\n", s[i].grade);
        printf("-------------------------------------------------------------\n");
    }
    getch();
}
