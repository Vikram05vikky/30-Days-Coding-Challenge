Problem - Find the Single Element 

Sample Input 1:
5
1 1 2 2 3


Sample Output 1:
3


Explanation of sample output 1:
{1, 2} each occurs twice, whereas 3 occurs only once.
Hence the answer is 3.

Input:

#include<vector>

int getSingleElement(vector<int> &arr){

    for(int i=0;i<arr.size();)
	{
        if(arr[i]!=arr[i+1])
		{
            return arr[i];
        }
        else
		{
            i+=2;
        }
    }   
}
