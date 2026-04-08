#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");

    fprintf(fp, "Hello %s %d", "hellomav",10);
     //fscanf(fp, "Hello %d", stdout);

    fclose(fp);
    return 0;
}