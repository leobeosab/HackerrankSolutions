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
    int arr[n];
    int zero = 0;
    int negatives = 0;

    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
       if (arr[arr_i] == 0) {
           zero++;
       } else if (arr[arr_i] < 0) {
           negatives++;
       }
    }

    printf("%f\n%f\n%f\n", (double)((n - zero) - negatives) / n, (double)negatives / n, (double)zero / n);

    return 0;
}
