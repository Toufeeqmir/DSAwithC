#include<stdio.h>
int lucas(int n){
    if(n==0){
        return 2;

    }
    else if(n==1){
        return 1;
    }
   return lucas(n-1) + lucas(n-2);
}
void print(int n){
    for(int i =0;i<n;i++){
        printf("%d " , lucas(i));
    }
}
int main(){
  int terms;
  printf("Enter the terms you want to enter :");
  scanf("%d" , &terms);
  printf("the lucas terms are " , terms);
  print(terms);
}