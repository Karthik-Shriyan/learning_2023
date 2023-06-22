#include <stdio.h>
#include<string.h>

struct Student {
    char name[50];
    int marks;
};

typedef struct Student Student;
void swap( Student* ,  Student* );

void sortStudents(Student* , int );
int main() {
    // Example usage of the sortStudents function
    struct Student students[5];

    // Initialize student information
    strcpy(students[0].name, "John");
    students[0].marks = 80;
    strcpy(students[1].name, "Alice");
    students[1].marks = 95;
    strcpy(students[2].name, "Bob");
    students[2].marks = 70;
    strcpy(students[3].name, "Emily");
    students[3].marks = 85;
    strcpy(students[4].name, "David");
    students[4].marks = 75;

    // Sort the students array in descending order based on marks
    sortStudents(students, 5);

    // Print the sorted array
    printf("Sorted Students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}

void swap(Student* a,  Student* b) {
     Student temp = *a;
    *a = *b;
    *b = temp;
}


void sortStudents(Student students[], int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}