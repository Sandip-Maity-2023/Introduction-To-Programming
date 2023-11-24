#include<stdio.h>

int main() {
    struct distance {
        int ft;
        int inch;
        int min;
    } c1, c2, c3;

    c1.ft = 10, c1.inch = 6, c1.min = 10;
    c2.ft = 10, c2.inch = 6, c2.min = 10;

    c3.ft = (c1.ft + c2.ft);
    c3.inch = (c1.inch + c2.inch);
    c3.min = (c1.min + c2.min);

    if (c3.inch >= 12) {
        c3.ft += 1;
        c3.inch -= 12;
    }

    printf("%d\n", c3.ft);
    printf("%d\n", c3.inch);
    printf("%d\n", c3.min);

    return 0;
}
