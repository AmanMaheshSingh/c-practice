//Write a structure capable of storing Time . Write a Function To Compare Those Time using Typedef.
#include <stdio.h>

typedef struct {
    int hour;
    int minute;
    int second;
} Time;

int compareTime(Time t1, Time t2) {
    if (t1.hour > t2.hour) return 1;
    if (t1.hour < t2.hour) return -1;

    if (t1.minute > t2.minute) return 1;
    if (t1.minute < t2.minute) return -1;

    if (t1.second > t2.second) return 1;
    if (t1.second < t2.second) return -1;

    return 0; 
}

int main() {
    Time t1, t2;

    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);

    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);

    int result = compareTime(t1, t2);

    if (result == 0)
        printf("Both times are equal.\n");
    else if (result == 1)
        printf("First time is later.\n");
    else
        printf("Second time is later.\n");

    return 0;
}
