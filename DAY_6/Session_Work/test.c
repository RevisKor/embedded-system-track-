#include <stdio.h>
#include "std_types.h"

typedef struct {
    u8* Name;
    u16 Salary;
    u16 Bonus;
    u16 Deductions;

} Employee;

int main() {

    Employee Ahmed = {
        .Name = "Ahmed",
        .Salary = 1000,
        .Bonus = 500,
        .Deductions = 200,
    };

    Employee Amr;
    Employee *amr = &Amr;

    (*amr).Deductions = 200;
    printf("%d\n", (*amr).Deductions);
    printf("================================\n");
    printf("Name: %s\n", Ahmed.Name);
    printf("Salary: %d\n", Ahmed.Salary);
    printf("Bonus: %d\n", Ahmed.Bonus);
    printf("Deductions: %d\n", Ahmed.Deductions);
    printf("================================\n\n");

    return 0;
}