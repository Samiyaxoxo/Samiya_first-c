
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LEN 100

// 
typedef struct {
    int rollNumber;
    char name[MAX_NAME_LEN];
    float marks;
} Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

// 
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Maximum student limit reached!\n");
        return;
    }
    
    printf("Enter roll number: ");
    scanf("%d", &students[studentCount].rollNumber);
    printf("Enter name: ");
    getchar();  // 
    fgets(students[studentCount].name, MAX_NAME_LEN, stdin);
    students[studentCount].name[strcspn(students[studentCount].name, "\n")] = '\0';  // 
    printf("Enter marks: ");
    scanf("%f", &students[studentCount].marks);
    
    studentCount++;
    printf("Student added successfully!\n");
}

// 
void viewStudents() {
    if (studentCount == 0) {
        printf("No student records available.\n");
        return;
    }
    
    printf("Student Records:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
               students[i].rollNumber, students[i].name, students[i].marks);
    }
}

// 
void editStudent() {
    int rollNumber, found = 0;
    printf("Enter roll number to edit: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            found = 1;
            printf("Editing record for %s\n", students[i].name);
            printf("Enter new name: ");
            getchar();  // 
            fgets(students[i].name, MAX_NAME_LEN, stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';  // 
            printf("Enter new marks: ");
            scanf("%f", &students[i].marks);
            printf("Record updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("No student found with roll number %d.\n", rollNumber);
    }
}

// 
void deleteStudent() {
    int rollNumber, found = 0;
    printf("Enter roll number to delete: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            found = 1;
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            printf("Record deleted successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("No student found with roll number %d.\n", rollNumber);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Edit Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                editStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
