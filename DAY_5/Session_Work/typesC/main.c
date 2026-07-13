#include <stdio.h>
#include "std_types.h"

struct Employee {
    u8 ID;
    u16 Salary;
    u8 Name[40];
};

int main() {

    printf("%lu\n", sizeof(unsigned int));
    return 0;
}