#include<stdio.h>
#include<string.h>
int main(){
    char str1[]  = "toufeeq";
    char str2[] = "mir";
  char str3[100];
  strcpy(str3, str1);
  strcat(str3 , str2);
  printf("concatenate strings %s /n" , str3);



}