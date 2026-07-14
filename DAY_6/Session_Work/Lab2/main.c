#include <stdio.h>
#include <unistd.h>
#include "std_types.h"

// const
#define ONE_SECOND 1

// structs
typedef struct {
    u8 Name[50];
    u16 Salary;
    u16 Bonus;
    u16 Deductions;
} Employee;
 
// prototypes
u16* print_user(Employee person);
Employee create_user(void);


int main() {
    u16 net_pay = 0;
    Employee employees[3];
    
    // create the employees
    for (int i = 0; i < 3; i++) {
        employees[i] = create_user();
    }
    
    // print them
    for (int i = 0; i < 3; i++) {
        if (i == 2) {
            net_pay = *print_user(employees[i]);
        } else {
            print_user(employees[i]);
        }
    }

    printf("Net Pay: %d\n", net_pay);

    return 0;
}

u16* print_user(Employee person) {
    static u16 total_net_salary = 0; 
    
    // Calc user net salary
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

Employee create_user(void) {
    Employee person = {};

     // Define user
    printf("Enter the Name: ");
    scanf("%49s", person.Name);
    printf("Enter the Salary: ");
    scanf("%hd", &(person.Salary));
    printf("Enter the Bonus: ");
    scanf("%hd", &(person.Bonus));
    printf("Enter the Deductions: ");
    scanf("%hd", &(person.Deductions));

    sleep(ONE_SECOND);
    printf("Processing ...\n");
    sleep(ONE_SECOND);

    printf("Press any key to continue: ");
    while (getchar() != '\n');
    getchar();

    return person;
}