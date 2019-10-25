#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Welcome to our car shop!\n");
    // Input personal data
    char firstName[20];
    char lastName[20];
    int phoneNumber[10];
    char address[50];
    printf("Please input your data\n");
    printf("First name: ");
    gets(firstName);
    printf("Last name: ");
    gets(lastName);
    printf("Phone number(ONLY DIGITS):\n");
    scanf("%d", phoneNumber);
    printf("Address:\n");
    gets(address);
    gets(address);
    return 0;
}
