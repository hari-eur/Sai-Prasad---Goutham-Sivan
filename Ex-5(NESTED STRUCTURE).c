//NESTED STRUCTURE IN C
#include <stdio.h>
#include<string.h>
struct Student {
    char Name[50];
    char mail[50];
    long long Mobile;
    float Percentage;
};

struct Department {
    char Dept[50];
    struct Student student;
    float TotalAverage;
};

int main() {
    int n, i, j;
    printf("Number of Inputs: ");
    scanf("%d", &n);

    struct Department dept[n];

    for (i = 0; i < n; i++) {
        printf("Enter Department Name: ");
        scanf("%s", dept[i].Dept);

        printf("Enter Student Name: ");
        scanf("%s", dept[i].student.Name);

        printf("Enter Student Mail ID: ");
        scanf("%s", dept[i].student.mail);

        printf("Enter Student Mobile Number: ");
        scanf("%lld", &dept[i].student.Mobile);

        printf("Enter Student Percentage: ");
        scanf("%f", &dept[i].student.Percentage);

        dept[i].TotalAverage = dept[i].student.Percentage;
    }

    printf("Number of branches: %d\n", n);

    printf("Average percentage per Department:\n");

    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (strcmp(dept[i].Dept, dept[j].Dept) == 0) {
                dept[i].TotalAverage += dept[j].student.Percentage;
                dept[j].student.Percentage = 0; // To avoid duplicate addition
            }
        }
        if (dept[i].student.Percentage != 0) {
            printf("%s - %.2f%%\n", dept[i].Dept, dept[i].TotalAverage);
        }
    }

    return 0;
}