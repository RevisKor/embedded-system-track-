#include <stdio.h>
#include "std_types.h"

struct Employee {
    u8 ID;
    u16 Salary;
    u8* Name;
} 
    // initialize structs
    Yahia = {
        .ID = 1,
        .Salary = 10000,
        .Name = "Yahia",
    },
    
    Ahmed = {
        .ID = 2,
        .Salary = 12000,
        .Name = "Ahmed",
    };

int main() {

    printf("%lu\n", sizeof(struct Employee));


    printf("==================\n");
    printf("Name: %s\nID: %d\nSalary: %d\n", Yahia.Name, Yahia.ID, Yahia.Salary);
    printf("==================\n");

    return 0;
}