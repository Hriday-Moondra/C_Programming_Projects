#include <stdio.h>

// Defining a simple structure
struct Student {
    int rollNo;
    char name[50];
    int sub1;
    int sub2;
    int sub3;
    int total;
};

int main() {
    // Array of structures for 3 students
    struct Student s[3];
    int i;

    // Loop to read data for 3 students
    for(i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollNo);
        
        printf("Enter First Name: ");
        scanf("%s", s[i].name);
        
        printf("Enter Marks for Subject 1, 2, and 3: ");
        scanf("%d %d %d", &s[i].sub1, &s[i].sub2, &s[i].sub3);
        
        // Calculating total marks for 3 subjects
        s[i].total = s[i].sub1 + s[i].sub2 + s[i].sub3;
    }

    // Displaying data in tabular form
    printf("\n--- STUDENT RESULT TABLE ---\n");
    printf("RollNo\tName\tSub1\tSub2\tSub3\tTotal\n");
    printf("--------------------------------------------\n");

    for(i = 0; i < 3; i++) {
        // \t creates a tab space to keep columns aligned
        printf("%d\t%s\t%d\t%d\t%d\t%d\n", 
               s[i].rollNo, s[i].name, s[i].sub1, s[i].sub2, s[i].sub3, s[i].total);
    }

    return 0;
}

