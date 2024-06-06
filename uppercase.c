// // #include <stdio.h>
// // #include <ctype.h>

// // int main() {
// //     char str[50];

// //     printf("Enter a string in lowercase: ");
// //     scanf("%49s", str);

// //     for (int i = 0; str[i]!= '\0'; i++) {
// //         str[i] = toupper(str[i]);
// //     }

// //     printf("Uppercase string: %s\n", str);

// //     return 0;
// // }
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// int main(){
//     char str[40];
//     printf("Enter a string in lower case :");
//     scanf("%s " , str);
//     for(int i =0; str[i] !='\0' ;i++){
//         str[i] = toupper(str[i]);
//     }
//     printf("uppercase string %s\n" ,str);
//     return 0;
// }
#include <stdio.h>

int main() {
    char str[50];

    printf("Enter a string in lowercase: ");
    scanf("%49s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >97 && str[i] < 122) {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}