#include <stdio.h>

int main() {
    FILE *fp = fopen("data.bin", "wb");

    int arr[5] = {10, 20, 30, 40, 50};

    fwrite(arr, sizeof(int), 5, fp);

    fclose(fp);
    return 0;
}