#include <iostream>
using namespace std;
bool isPerfectSquare(int number) {
   for (int i = 1; i * i <= number; i++) {
      if ((number % i == 0) && (number / i == i)) {
         return true;
      }
   }
   return false;
}
int main() {
   int n = 1024;
   if(isPerfectSquare(n)){
      cout << n << " is perfect square number";
   } else {
      cout << n << " is not a perfect square number";
   }
}
