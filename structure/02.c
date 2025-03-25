#include <stdio.h>
#include <string.h>

struct employee {
    int Emp_id;
    char Emp_name[20];
    int Emp_salary;
    int Emp_age;
    char Emp_rank;
    char Emp_department[20];
};

struct employee AddEmployee() {
    struct employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.Emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", e.Emp_name);

    printf("Enter Employee Salary: ");
    scanf("%d", &e.Emp_salary);

    printf("Enter Employee Age: ");
    scanf("%d", &e.Emp_age);

    printf("Enter Employee Rank: ");
    scanf(" %c", &e.Emp_rank);

    printf("Enter Employee Department: ");
    scanf("%s", e.Emp_department);

    return e;
}

void DisplayEmployee(struct employee e) {
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.Emp_id);
    printf("Name: %s\n", e.Emp_name);
    printf("Salary: %d\n", e.Emp_salary);
    printf("Age: %d\n", e.Emp_age);
    printf("Rank: %c\n", e.Emp_rank);
    printf("Department: %s\n", e.Emp_department);
}

void SearchByID(struct employee e[], int count) {
    int id, found = 0;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (e[i].Emp_id == id) {
            DisplayEmployee(e[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found.\n", id);
    }
}

void SearchByName(struct employee e[], int count) {
    char name[20];
    int found = 0;
    printf("Enter Employee Name to search: ");
    scanf("%s", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(e[i].Emp_name, name) == 0) {
            DisplayEmployee(e[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("Employee with name %s not found.\n", name);
    }
}

void DisplayByDepartment(struct employee e[], int count) {
    char department[20];
    int found = 0;
    printf("Enter Department to search: ");
    scanf("%s", department);

    printf("\nEmployees in Department: %s\n", department);
    for (int i = 0; i < count; i++) {
        if (strcmp(e[i].Emp_department, department) == 0) {
            DisplayEmployee(e[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No employees found in department: %s\n", department);
    }
}

void SortBySalary(struct employee e[], int count) {
    struct employee temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (e[j].Emp_salary > e[j + 1].Emp_salary) {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }

    printf("\nEmployees sorted by salary in ascending order:\n");
    for (int i = 0; i < count; i++) {
        DisplayEmployee(e[i]);
    }
}

void TotalSalary(struct employee e[], int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += e[i].Emp_salary;
    }
    printf("\nTotal Salary of all Employees: %d\n", total);
}

void CountTotalEmployees(int count) {
    printf("\nTotal number of employees: %d\n", count);
}

int main() {
    struct employee employees[50];
    int count = 0, choice;

    while (1) {
        printf("\n1. Add Employee\n2. Display All Employees\n3. Search by ID\n4. Search by Name\n");
        printf("5. Display by Department\n6. Sort by Salary (Ascending)\n7. Total Salary of Employees\n");
        printf("8. Count Total Employees\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count < 50) {
                    employees[count] = AddEmployee();
                    count++;
                } else {
                    printf("Employee list is full!\n");
                }
                break;
            case 2:
                for (int i = 0; i < count; i++) {
                    DisplayEmployee(employees[i]);
                }
                break;
            case 3:
                SearchByID(employees, count);
                break;
            case 4:
                SearchByName(employees, count);
                break;
            case 5:
                DisplayByDepartment(employees, count);
                break;
            case 6:
                SortBySalary(employees, count);
                break;
            case 7:
                TotalSalary(employees, count);
                break;
            case 8:
                CountTotalEmployees(count);
                break;
            case 9:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
