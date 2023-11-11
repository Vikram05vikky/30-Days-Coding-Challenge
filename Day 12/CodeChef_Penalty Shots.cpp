Problem :
It's the soccer match finals in Chefland and as always it has reached the penalty shotouts. Each team is given 5 shots to make and the team scoring a goal on the maximum number of shots wins the game. 
If both the teams' scores are equal, then the game is considered a draw and we would have 2 champions.
Given ten integers  where the odd indexed integers represent the outcome of the shots made by team 1 and even indexed integers epresent the outcome of the shots made by team 2.
Determine the winner or find if the game ends in a draw.

Input:
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
    {
        int arr[10];
        
        for(int i=0;i<10;i++)
            cin>>arr[i];
            
        int s1=0;
        int s2=0;
        
        for(int i=0;i<10;i++)
        {
            if(i%2 != 0)
                s1+=arr[i];
                
            else if(i%2 == 0)
                s2+=arr[i];
        }
        
        if(s1>s2)
            cout<<"2"<<endl;
        else if(s2>s1)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
	return 0;
}
