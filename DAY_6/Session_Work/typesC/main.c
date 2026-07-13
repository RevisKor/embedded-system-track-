#include <stdio.h>
#include "std_types.h"

struct Employee {
    u8 ID;
    u16 Salary;
    u8* Name;
} __attribute__((packed));

int main() {

    struct Employee Yahia = {
        .ID = 1,
        .Salary = 10000,
        .Name = "Yahia",
    };

    printf("%lu\n", sizeof(struct Employee));


    printf("==================\n");
    printf("Name: %s\nID: %d\nSalary: %d\n", Yahia.Name, Yahia.ID, Yahia.Salary);
    printf("==================\n");

    return 0;
}