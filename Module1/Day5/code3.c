#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

typedef struct Time Time;
Time getTimeDif( Time , Time );
int main() {
    struct Time startTime, endTime, difference;

    
    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    
    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    
    difference = getTimeDif(startTime, endTime);

    
    printf("Time difference: %d hours, %d minutes, %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
Time getTimeDif( Time start, Time end) {
     Time diff;

    
    int startTimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int endTimeInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;

    
    int diffInSeconds = endTimeInSeconds - startTimeInSeconds;

    
    diff.hours = diffInSeconds / 3600;
    diffInSeconds %= 3600;
    diff.minutes = diffInSeconds / 60;
    diff.seconds = diffInSeconds % 60;

    return diff;
}
