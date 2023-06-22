#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};
typedef struct Student Student;
void parseString(const char* ,  Student** , int );
void initializeStudents( Student*, int );
int main() {
    const char* input = "1001 Aron 100.00";
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); // Consume the newline character

    struct Student* students;
    parseString(input, &students, numStudents);
    initializeStudents(students, numStudents);
    for (int i = 0; i < numStudents; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students); 

    return 0;
}
void parseString(const char* input,  Student** students, int numStudents) {
    const char* delimiter = " ";
    char* token;
    char inputCopy[100];
    strcpy(inputCopy, input);

    *students = ( Student*)malloc(numStudents * sizeof( Student));

    token = strtok(inputCopy, delimiter);
    for (int i = 0; i < numStudents && token != NULL; i++) {
        (*students)[i].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        strcpy((*students)[i].name, token);

        token = strtok(NULL, delimiter);
        (*students)[i].marks = atof(token);

        token = strtok(NULL, delimiter);
    }
}
void initializeStudents(Student* students, int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

