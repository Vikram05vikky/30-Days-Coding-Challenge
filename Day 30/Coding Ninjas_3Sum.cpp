Problem : 3Sum

Input :

#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
  
	sort(arr.begin() , arr.end()) ;

  vector<vector<int>> ans ;

	int target = K;

    for(int i = 0 ; i < n ; i++){

        if(i > 0 && arr[i] == arr[i - 1]) continue ;

 

        int j = i + 1 ;

        int k = n - 1 ;

        while(j < k){

            long long sum = arr[i] + arr[j] + arr[k] ;

            if(sum == target){

                vector<int>temp = {arr[i] , arr[j] , arr[k]} ;

                ans.push_back(temp) ;

                j++ ; k--;

 

                while(j < k && arr[j] == arr[j - 1]) j++ ;

 

                while(j < k && arr[k] == arr[k + 1]) k-- ;

            }

            else if(sum > target){

                k-- ;

            }

            else{

                j++ ;

            }

 

        }

 

    }

    

    return ans ;
}
