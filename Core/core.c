#include <stdio.h>

int main() {
    printf("Generating a core dump...\n");
    int *ptr = NULL;
    *ptr = 10; // This will cause a Segmentation Fault (SIGSEGV)
    return 0;
}
