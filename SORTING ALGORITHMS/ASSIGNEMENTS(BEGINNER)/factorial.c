#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);
  if(n<0)
    printf("Error! factorial of a negative number doesnt exist");
  else{
    for(i=1;i<=n;i++){
      fact*=i;
}
    printf("Facorial of %d=%llu",n,fact);
  }
  return 0;
}
