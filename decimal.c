#include<stdio.h>
int main(){
    int n = 4;
    binarynum(n);

}
void binarynum(int n){
    if(n==0 ){
        printf("1");
    }
    else if(n==1){
        printf("1");
    }
    else{

    int r = n%2;
    binarynum(n/2);
    printf(" %d " , r);
    }
}