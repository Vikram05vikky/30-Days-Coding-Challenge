Problem : Factorial of a Number

Input:
#include <iostream>
using namespace std;

int main() {
    int n,fac=1;
    cin >> n;
    if (n >= 0) {
      for (int i = 1; i <= n; i++)
        fac = fac * i;
        cout << fac;
    }
    else
    cout << "Error";
    return 0;

}
    
