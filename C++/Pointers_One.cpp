//1/20/2017 Ryan Wise

//Really this is basically C compiled with C++

#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int swp = *a + *b;
    *b = abs(*a - *b);
    *a = swp;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
