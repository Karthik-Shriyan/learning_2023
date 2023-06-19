#include <stdio.h>

int calculateTotalSeconds(int hours, int minutes, int seconds) {
    int totalSeconds = 0;
    
    totalSeconds += hours * 3600;       // Convert hours to seconds
    totalSeconds += minutes * 60;       // Convert minutes to seconds
    totalSeconds += seconds;            // Add remaining seconds
    
    return totalSeconds;
}

int main() {
    int hours, minutes, seconds;
    
    printf("Enter hours: ");
    scanf("%d", &hours);
    
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    
    int totalSeconds = calculateTotalSeconds(hours, minutes, seconds);
    
    printf("Total seconds: %d\n", totalSeconds);
    
    return 0;
}
