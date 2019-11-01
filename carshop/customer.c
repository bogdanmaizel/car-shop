//
// Created by mbogd on 1/11/2019.
//
#include <stdio.h>

void showCustomerData (char firstName[], char lastName[], char phoneNumber[], char address[]){
    printf("Your contract is:\n");
    printf("Customer data:\n");
    printf("-name: %s %s\n", firstName, lastName);
    printf("-phone number: %s\n", phoneNumber);
    printf("-address: %s\n", address);
}

void readPersonalData(char firstName[], char lastName[], char phoneNumber[], char address[]) {
    printf("Please input your data\n");
    printf("---First name:\n");
    gets(firstName);
    printf("---Last name:\n");
    gets(lastName);
    printf("---Phone number\n");
    gets(phoneNumber);
    printf("---Address\n");
    gets(address);
}
