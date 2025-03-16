#include <stdio.h>
#include <string.h>

struct dob {
    int day;
    int month;
    int year;
};

struct student_info {
    int roll_no;
    char name[50];
    float CGPA;
    struct dob age;
};

void print_by_value(struct student_info s) {
    printf("Roll No: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("CGPA: %0.2f\n", s.CGPA);
    printf("Age: %d-%d-%d\n", s.age.day, s.age.month, s.age.year);
}
void print_by_address(struct student_info *s) {
    printf("Roll No: %d\n", s->roll_no);
    printf("Name: %s\n", s->name);
    printf("CGPA: %0.2f\n", s->CGPA);
    printf("Age: %d-%d-%d\n", s->age.day, s->age.month, s->age.year);
}

int main() {
    struct student_info s1;
    s1.roll_no = 111;
    strcpy(s1.name, "harsh");
    s1.CGPA = 9.5;
    s1.age.day = 15;
    s1.age.month = 8;
    s1.age.year = 1995;

    printf("Printing by value:\n");
    print_by_value(s1);

    printf("Printing by address:\n");
    print_by_address(&s1);

    return 0;
}
