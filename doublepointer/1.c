#include<stdio.h>
int main()
{
    int a=8;
    int *h=&a;
    int **j=&h;
    int ***k=&j;

    **k=90;
    printf("%d\n",&a);
    printf("%d\n",h);
    printf("%d\n",*j);
    printf("%d\n",j);
    printf("%d\n",**j);
    printf("%d\n",***k);
      printf("%d\n",**k);
}
int name_validation(char name[]);
int number_duplicate(struct AddressBook *addressBook, char number[]);
int check_number(char number[]);
int sizeof_number(char number[]);
int gmail_mail(char mail[]);
int email_validation(char mail[])
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "addressbook.h"
 
/*
 * name_validation: only letters and spaces allowed, must be non-empty.
 */
int name_validation(char name[])
{
    if (name[0] == '\0') {
        printf("  [Error] Name cannot be empty.\n");
        return 0;
    }
    for (int i = 0; name[i] != '\0'; i++) {
        if (!isalpha((unsigned char)name[i]) && name[i] != ' ') {
            printf("  [Error] Name must contain only letters and(no spaces allowed).\n");
            return 0;
        }
    }
    return 1;
}
 
/*
 * number_duplicate: returns 1 if the number does NOT already exist,
 *                   0 if it is a duplicate.
 */
int number_duplicate(struct AddressBook *addressBook, char number[])
{
    for (int i = 0; i < addressBook->contactCount; i++) {
        if (strcmp(addressBook->contacts[i].phone, number) == 0) {
            printf("  [Error] This number already exists (contact: %s).\n",
                   addressBook->contacts[i].name);
            return 0;
        }
    }
    return 1;
}
 
/*
 * check_number: only digits allowed.
 */
int check_number(char number[])
{
    for (int i = 0; number[i] != '\0'; i++) {
        if (!isdigit((unsigned char)number[i])) {
            printf("  [Error] Phone number must contain digits only.\n");
            return 0;
        }
    }
    return 1;
}
 
/*
 * sizeof_number: must be exactly 10 digits.
 */
int sizeof_number(char number[])
{
    if (strlen(number) != 10) {
        printf("  [Error] Phone number must be exactly 10 digits (got %zu).\n",
               strlen(number));
        return 0;
    }
    return 1;
}
 
/*
 * gmail_mail: checks that the mail ends with "@gmail.com".
 */
int gmail_mail(char mail[])
{
    const char *suffix = "@gmail.com";
    size_t mlen = strlen(mail);
    size_t slen = strlen(suffix);
    if (mlen <= slen) {
        printf("  [Error] Email must end with @gmail.com.\n");
        return 0;
    }
    if (strcmp(mail + mlen - slen, suffix) != 0) {
        printf("  [Error] Only @gmail.com addresses are accepted.\n");
        return 0;
    }
    return 1;
}
 
/*
 * email_validation: local part (before @) must be lowercase alphanumeric
 *                   or dots/underscores only.
 */
int email_validation(char mail[])
{
    int at_pos = -1;
    for (int i = 0; mail[i] != '\0'; i++) {
        if (mail[i] == '@') { at_pos = i; break; }
    }
    if (at_pos <= 0) {
        printf("  [Error] Invalid email format.\n");
        return 0;
    }
    for (int i = 0; i < at_pos; i++) {
        char c = mail[i];
        if (!islower((unsigned char)c) && !isdigit((unsigned char)c) &&
            c != '.' && c != '_') {
            printf("  [Error] Email local part must be lowercase letters,"
                   " digits, dots, or underscores only.\n");
            return 0;
        }
    }
    return 1;
}