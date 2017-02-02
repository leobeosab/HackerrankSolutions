#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);

    int strLen = strlen(time);
    char amPM = time[strLen-2];

    int timeInt;
    int success = sscanf(time, "%d:**:****", &timeInt);

    if (success == 1 && amPM == 'P' && timeInt != 12) {
        timeInt += 12;
        char data[strLen - 5];
        strncpy(data, time+3, strLen - 5);
        printf("%d:%s", timeInt, data);
    } else if (amPM == 'A' && timeInt == 12) {
        char data[strLen - 5];
        strncpy(data, time+3, strLen - 5);
        printf("00:%s", data);
    } else {
        char data[strLen - 2];
        strncpy(data, time, strLen - 2);
        printf("%.*s",strLen - 2, data);
    }

    return 0;
}
