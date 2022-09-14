#include<stdio>
#include<stdlib.h>
int main(){
int n,a;
  scanf("%d",&n);
  
    while(n!=0){
     a=n%10; 
    printf("%d",a);
    n=n/10;
    }
  
}
