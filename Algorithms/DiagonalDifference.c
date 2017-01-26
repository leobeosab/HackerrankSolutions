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
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){

          scanf("%d",&a[a_i][a_j]);
       }
    }
    int diag_one = 0;
    int diag_two = 0;

    for (int i = 0; i < n; i++) {
        diag_one += a[i][i];
        diag_two += a[i][n - (i + 1)];
    }

    printf("%d", abs(diag_one - diag_two));

    return 0;
}
