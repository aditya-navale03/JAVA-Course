#include"stdio.h"
void main() {

    struct employee {
        int Emp_id;
        char Emp_name[20];
        int Emp_salary;
        int Emp_age;
        char Emp_rank;
    };

struct employee E1 = {001, "Mike", 23000, 34,'A'};
struct employee E2 = {002, "John", 50000, 29,'C'};
struct employee E3 = {003, "Sarah", 32000, 40,'D'};
struct employee E4 = {004, "Emma", 15000, 45,'B'};

printf("Total employees: 4\n\n");

printf("salary between 10k to 30k:\n%d,%s,%d,%d,%c\n",E1.Emp_id,E1.Emp_name,E1.Emp_salary,E1.Emp_age,E1.Emp_rank);
printf("%d,%s,%d,%d,%c\n\n",E4.Emp_id,E4.Emp_name,E4.Emp_salary,E4.Emp_age,E4.Emp_rank);

printf("age between 20 to 40:\n%d,%s,%d,%d,%c\n\n",E2.Emp_id,E2.Emp_name,E2.Emp_salary,E2.Emp_age,E2.Emp_rank);
printf("age between 40 to 50:\n%d,%s,%d,%d,%c\n",E3.Emp_id,E3.Emp_name,E3.Emp_salary,E3.Emp_age,E3.Emp_rank);
printf("%d,%s,%d,%d,%c\n\n",E4.Emp_id,E4.Emp_name,E4.Emp_salary,E4.Emp_age,E4.Emp_rank);

printf("Employee Ranks:\n");
printf("%d,%s,%c\n", E1.Emp_id, E1.Emp_name, E1.Emp_rank);
printf("%d,%s,%c\n", E2.Emp_id, E2.Emp_name, E2.Emp_rank);
printf("%d,%s,%c\n", E3.Emp_id, E3.Emp_name, E3.Emp_rank);
printf("%d,%s,%c\n", E4.Emp_id, E4.Emp_name, E4.Emp_rank);
}