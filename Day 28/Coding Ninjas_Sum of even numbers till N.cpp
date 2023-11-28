Problem : Sum of even numbers till N

Input:

#include <bits/stdc++.h> 
long long evenSumTillN(int n) {
    
    long long int ans  =0;

    for(long long int i=1 ;i<=n;i++){

          if(i%2==0){

              ans+=i;

          }

    }

    return ans;
}
