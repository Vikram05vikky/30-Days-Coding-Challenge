Problem
In a Chess match "a + b", each player has a clock which shows 
a minutes at the start and whenever a player makes a move, b seconds are added to this player's clock. Time on a player's clock decreases during that player's turns and remains unchanged during the other player's turns. If the time on some player's clock hits zero (but not only in this case), this player loses the game.

Input:

#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t)
    {
        int turns,a,b,tt;
        cin>>turns>>a>>b;
        int time=180;
        tt=2*(time+turns);
        int result=tt-(a+b);
        cout<<result<<endl;
        t = t - 1;
    }
	return 0;
}
