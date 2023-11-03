Coding Ninjas - Search In Rotated Sorted Array

Problem :
You have been given a sorted array/ list 'arr' consisting of 'n' elements. You are also given an integer 'k'.
Now the array is rotated at some pivot point unknown to you.

Sample Input 1:
4 3
8 9 4 5

Sample output 1:
-1 

Explanation of Sample Output 1:
For the test case, 3 is not present in the array. Hence the output will be -1.

Input:

int search(vector<int>& arr, int n, int k)
{
    int count=0;
    int a;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            count=1;
            a=i;
            break;
        }
    }
    if(count==1)
        return a;
    else
    return -1;
}
