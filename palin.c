#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, len, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // // convert to lowercase
    // for (i = 0; i < len; i++) {
    //     if (str[i] > 64 && str[i] < 91) 
    //         str[i] += 32; 
    // }

    // check for palindromemom
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The string %s is a palindrome.\n", str);
    else
        printf("The string %s is not a palindrome.\n", str);

    return 0;
}