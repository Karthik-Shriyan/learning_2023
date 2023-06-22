#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int marks;
};
typedef struct Student Student;
int searchByName(Student*, int , const char* );
int main() {
    
    struct Student students[5];

    
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

    
    const char* searchName = "Bob";
    int index = searchByName(students, 5, searchName);

    
    if (index != -1) {
        printf("Student found at index %d\n", index);
        printf("Name: %s, Marks: %d\n", students[index].name, students[index].marks);
    } else {
        printf("Student not found\n");
    }

    return 0;
}
int searchByName(Student students[], int numStudents, const char* searchName) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            return i; 
        }
    }
    return -1; 
}
