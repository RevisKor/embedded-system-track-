#include <stdio.h>
#include "std_types.h"

struct Employee {
    u8* Name;
    u16 Salary;
    u16 Bonus;
    u16 Deductions;
} 
    Ahmed = {
        .Name = "Ahmed",
        .Salary = 1000,
        .Bonus = 500,
        .Deductions = 200,
    },
    Amr = {
        .Name = "Amr",
        .Salary = 2000,
        .Bonus = 1000,
        .Deductions = 0,
    },
    Waleed = {
        .Name = "Waleed", 
        .Salary = 2000,
        .Bonus = 350,
        .Deductions = 0,
    }; 

u16* print_user(struct Employee person);

int main() {
    u16 net_pay = 0;

    print_user(Ahmed);                  // run for Ahmed 
    print_user(Amr);                    // run for Amr

    net_pay += *print_user(Waleed);     // run for Waleed and collect static total_net

    printf("Net Pay: %d\n", net_pay);
    
    return 0;
}

u16* print_user(struct Employee person) {
    static u16 total_net_salary = 0; 
    u16 net_salary = person.Salary + person.Bonus - person.Deductions;

    printf("================================\n");
    printf("Name: %s\n", person.Name);
    printf("Salary: %d\n", person.Salary);
    printf("Bonus: %d\n", person.Bonus);
    printf("Deductions: %d\n", person.Deductions);
    printf("Total Earnings: %d\n", net_salary);
    printf("================================\n\n");


    total_net_salary += (net_salary);
  
    return &total_net_salary; 
}