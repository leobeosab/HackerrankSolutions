#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct {
    int a;
    int b;
    int c;
} score;

int main(){
    int a0;
    int a1;
    int a2;
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0;
    int b1;
    int b2;
    scanf("%d %d %d",&b0,&b1,&b2);

    score alice = { a0, a1, a2};
    score bob = { b0, b1, b2};

    int *tmpData = testScore(alice, bob);

    printf("%d %d", tmpData[0], tmpData[1]);

    return 0;
}

int testScore(score alice, score bob) {
    int *data = malloc(2);
    if (alice.a > bob.a) {
        data[0]++;
    } else if (alice.a != bob.a) {
        data[1]++;
    }
    if (alice.b > bob.b) {
        data[0]++;
    } else if (alice.b != bob.b) {
        data[1]++;
    }
    if (alice.c > bob.c) {
        data[0]++;
    } else if (alice.c != bob.c) {
        data[1]++;
    }

    return data;
}
