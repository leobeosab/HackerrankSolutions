#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;

    scanf("%d",&n);

    char data[n];

    for (int i = n - 1; i >= 0; i--) {
        char * lastOccr = strrchr(data, ' ');
        int lastOccrInt = lastOccr - data + 1;
        memset(data, '#', n);
        memset(data, ' ', i);
        printf("%.*s\n", n, data);
    }

    return 0;
}
