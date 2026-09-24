#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
};

void inputStudent(struct Student *s);
void displayStudent(struct Student s);

int main() {
    struct Student s1;

    inputStudent(&s1);
    displayStudent(s1);

    return 0;
}

void inputStudent(struct Student *s) {
    printf("Enter Roll No: ");
    scanf("%d", &s->rollNo);
    
    while (getchar() != '\n'); 

    printf("Enter Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    
    for (int i = 0; s->name[i] != '\0'; i++) {
        if (s->name[i] == '\n') {
            s->name[i] = '\0';
            break;
        }
    }
}

void displayStudent(struct Student s) {
    printf("\nStudent Details Displayed:\n");
    printf("Roll No = %d\n", s.rollNo);
    printf("Name = %s\n", s.name);
}
