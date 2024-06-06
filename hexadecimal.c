#include<stdio.h>
int  hexa(int n){
    if(n==0 || n==1){
        return n;
    }
    else if(n == 10 &&n == 11 && n==12 && n==13 && n==14 && n==15 && n==16){
        printf("A" , "B" , "c" , "d" , "e" , "f");
    }
    else{
        int r = n%16;
        hexa(n/16);
        printf("%d " , r);
    }
    return n;;
}
int main(){
 int n = 5412;
 printf("%d " , hexa(n));
}