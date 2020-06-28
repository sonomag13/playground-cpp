#include <stdio.h>

int main() {

    int val1 = 10;

    if (val1 == 10) {
        fprintf(stderr, "failed. File = %s Line = %d", __FILE__, __LINE__);
    }



    return 0;
}
