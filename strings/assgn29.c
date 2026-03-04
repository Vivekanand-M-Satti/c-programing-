// #include <stdio.h>

// char *my_strtok(char *str, char *delim) {
//     static char *next_token = NULL;

//     // If str is not NULL, it's a new string, so reset next_token
//     if (str != NULL) {
//         next_token = str;
//     }

//     // If next_token is NULL, we've reached the end of the string
//     if (next_token == NULL) {
//         return NULL;
//     }

//     // Skip over any leading delimiters
//     while (*next_token != '\0' && strchr(delim, *next_token) != NULL) {
//         next_token++;
//     }

//     // If we've reached the end of the string, return NULL
//     if (*next_token == '\0') {
//         return NULL;
//     }

//     // Find the next delimiter
//     char *token_start = next_token;
//     while (*next_token != '\0' && strchr(delim, *next_token) == NULL) {
//         next_token++;
//     }

//     // If we found a delimiter, replace it with a null character
//     if (*next_token != '\0') {
//         *next_token = '\0';
//         next_token++;
//     }

//     return token_start;
// }

// int main() {
//     char string1[100], string2[100];
//     printf("Enter string1: ");
//     fgets(string1, sizeof(string1), stdin);
//     string1[strcspn(string1, "\n")] = 0; // Remove newline character

//     printf("Enter string2: ");
//     fgets(string2, sizeof(string2), stdin);
//     string2[strcspn(string2, "\n")] = 0; // Remove newline character

//     char *token = my_strtok(string1, string2);
//     while (token != NULL) {
//         printf("Tokens: %s\n", token);
//         token = my_strtok(NULL, string2);
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    char string1[100], string2[100];
    printf("Enter string1: ");
    scanf("%[^\n]",string1);

    printf("Enter string2: ");
   // scanf("%s",string2);

    char *ptr = string1;
    int i = 0, j = 0;
    int flag = 0;

    printf("Tokens: ");
    while (ptr[i] != '\0') {
        // Check if the current character is a delimiter
        while (string2[j] != '\0') {
            if (ptr[i] == string2[j]) {
                flag = 1;
                break;
            }
            j++;
        }

        // If it's a delimiter and flag is 1, print a newline
        if (flag == 1 && ptr[i] != '\0') {
            printf("\nTokens: ");
            i++;
            flag = 0;
            j = 0;
            continue;
        }

        // If it's not a delimiter, print the character
        if (flag == 0) {
            printf("%c", ptr[i]);
        }

        i++;
        j = 0;
        flag = 0;
    }

    return 0;
}