#include<stdio.h>
int main()
{
    struct company {
        char emp_id[10], name[25], address[10];
        unsigned long int phone;
        int noofemployee;
    };
    struct company e;
    printf("Enter employee Id: ");
    gets(e.emp_id);
    printf("Enter name: ");
    gets(e.name);
    printf("Enter address: ");
    gets(e.address);
    printf("Enter phone number: ");
    scanf("%d", &e.phone);
    printf("Enter the no of employee: ");
    scanf("%d", &e.noofemployee);
    printf("Employee details \n Employee ID: %s \n Name: %s \n Address: %s \n Phone: %ld \n No of employee: %d", e.emp_id, e.name, e.address, e.phone, e.noofemployee);

    return 0;
}