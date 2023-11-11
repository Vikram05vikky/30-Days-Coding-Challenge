Problem
The World Chess Championship 2022 is about to start. 14 Classical games will be played between Chef and Carlsen in the championship, where each game has one of three outcomes — it can be won by Carlsen, won by Chef, or it can be a draw. The winner of a game gets 2 points, and the loser gets 
0 points. If it’s a draw, both players get 1 point each.
The total prize pool of the championship is 100
At end of the 14 Classical games, if one player has strictly more points than the other, he is declared the champion and gets 60⋅
X as his prize money, and the loser gets 40.
If the total points are tied, then the defending champion Carlsen is declared the winner. However, if this happens, the winner gets only 55 X, and the loser gets 45 X.

Input:

#include <iostream>
using namespace std;

int main() {
    int t, x, c, n, d;
	string s;
	cin>>t;
	while(t--){
	    cin>>x;
	    cin>>s;
	    
	    c = 0, n = 0, d = 0;
	    for (int i = 0; i < 14; i++) {
	        if(s[i] == 'C'){
	            c++;
	        }
	        else if(s[i] == 'D'){
	            d++;
	        }
	        else if(s[i] == 'N'){
	            n++;
	        }
	    }
	    
	    if(c > n){
	        cout<<60*x<<endl;
	    }
	    else if(c == n){
	        cout<<55*x<<endl;
	    }
	    else{
	        cout<<40*x<<endl;
	    }
	}
    
	return 0;
}
