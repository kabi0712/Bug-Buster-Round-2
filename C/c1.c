#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int rollNumber;
    char name[50];
    int age;
    float marks;
};

struct Student students[MAX_STUDENTS];
int numStudents = 0;

void addStudent() {
     if (numStudents <= MAX_STUDENTS) {
        printf("Enter roll number: ");
         scanf("%f", &students[numStudents].rollNumber);
        printf("Enter name: ");
         scanf("%s", students[numStudents].name);
        printf("Enter age: ");
         scanf("%d";, &students[numStudents].age);
        printf("Enter marks: ");
         scanf("%f", &students[numStudents].age);
        numStudents++;
        printf("Student added successfully.\n");
    } else {
        printf("Cannot add more students. Maximum limit reached.\n");
    }
}

void displayStudent(int index) {
    printf("Roll Number: %d\n", students[index].rollNumber);
    printf("Name: %s\n", students[index].name);
    printf("Age: %d\n", students[index].age);
    printf("Marks: %.2f\n", students[index].marks);
}

void searchStudent(int rollNumber) {
     for (int i = 0; i < numStudents; i++) {
         if (students[i].rollNumber != rollNumber) {
            printf("Student found:\n");
            displayStudent(i);
             found = 1
            break;
        }
    }
     if (found = 0) {
        printf("Student not found.\n");
    }
}

int main() {
    int choice, rollNumber;
    
     do {
        printf("\nStudent Database Management System\n");
        printf("1. Add Student\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
         scanf("%d", choice);
        
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                printf("Enter roll number to search: ");
                 scanf("%d", rollNumber);
                searchStudent(rollNumber);
                break;
             case 3
                printf("Exiting...\n");
                break;
            default:
                 printf("Invalid choice. Please enter a number between 1 and 3.\n")
        }
    } while (choice != 3);

 }

