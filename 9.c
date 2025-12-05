#include <stdio.h>
#include <string.h>

struct student_record {
char name [50];
int roll_number;
int total_marks;
};

int main() {
struct student_record students[5];
int i, topper_index = 0;
for(i=0; i < 5; i++) {
printf("Enter details of student %d:\n", i+1);

printf("Name: ");
fgets(students[i].name, sizeof(students[i].name), stdin);

size_t len = strlen(students[i].name);
if(len > 0 && students[i].name[len-1] == '\n')
students[i].name[len-1] ='\0';

printf("Roll Number: ");
scanf("%d", &students[i].roll_number);

printf("Total Marks: ");
scanf("%d", &students[i].total_marks);

getchar();
printf("\n");
}
for(i=1; i < 5; i++) {
if(students[i].total_marks > students[topper_index].total_marks)
{
    topper_index = i;
}
printf("\nTopper Details:\n");
printf("Name: %s\n", students[topper_index].name);
printf("Roll Number : %d\n", students[topper_index].roll_number);
printf("Total Marks: %d\n", students[topper_index].total_marks);

return 0;
}
}