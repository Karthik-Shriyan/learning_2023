// 3. Write a program to read the - Roll No - Name(Note, you should read full name of the student including initials) - Marks of Physics, Math and Chemistry Calculate the total, percentage and print the summary.

#include <stdio.h>

int Maximum_marks = 300;
int result1, result2;
int rollno;

int m1, m2, m3;

int totol(int m1, int m2, int m3)
{
    return m1 + m2 + m3;
}
int percentage(m1, m2, m3)
{

    return (m1 + m2 + m3) / 3;
}

int main()
{
    char name[100];
    printf("Enter the roll no \n");
    scanf("%d", &rollno);
    fgetc(stdin);
    printf("Enter the Full name ");
    fgets(name,100, stdin);
    printf("Enter the physics marks \n");
    scanf("%d", &m1);
    printf("Enter the chemistry marks \n");
    scanf("%d", &m2);
    printf("Enter the maths marks \n");
    scanf("%d", &m3);
    result1 = totol(m1, m2, m3);
    result2 = percentage(m1, m2, m3);

    printf("The totol marks is:%d", result1);
    printf("The totol percentage is:%d", result2);
}