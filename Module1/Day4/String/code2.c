#include <stdio.h>

int stringToInteger(char *str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    
    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    
    while (str[i] != '\0') {
        
        if (str[i] >= '0' && str[i] <= '9') {
            
            int digit = str[i] - '0';
            
            result = (result * 10) + digit;
        } else {
           
            printf("Error: Invalid character '%c' in the string.\n", str[i]);
            return 0;
        }
        i++;
    }

    return result * sign;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

    int number = stringToInteger(str);
    printf("Converted integer: %d\n", number);

    return 0;
}
