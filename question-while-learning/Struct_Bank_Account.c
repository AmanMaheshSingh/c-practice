//Create a Structure representing a bank account of a costumer.
#include <stdio.h>
#include <string.h>   

typedef struct {
    int accNo;
    float bal;
    char name[50];
    char ifc_code[12];
} bank;

void main()
{
    bank c1;
    c1.accNo = 2045656523;   // removed leading 0
    c1.bal = 5.00;
    strcpy(c1.ifc_code, "aman28man73");
    strcpy(c1.name, "aman_mahesh_singh");

    printf("Account Number: %d\n", c1.accNo);
    printf("Balance: %.2f\n", c1.bal);
    printf("IFC Code: %s\n", c1.ifc_code);
    printf("Name: %s\n", c1.name);

}
