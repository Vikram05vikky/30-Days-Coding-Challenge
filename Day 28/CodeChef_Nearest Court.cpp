Problem : Nearest Court

Input :
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
	    int x,y,dist;
	    cin >> x >> y;
	    dist = abs(x-y);
	    if (dist == 1)
	    {
	        cout << 1 << endl;;
	    }
	    else if (dist%2 == 0)
	    {
	        cout << dist/2 << endl;
	    }
	    else if (dist%2 !=0)
	    {
	        cout << (dist/2) + 1 << endl;
	    }
	}
	return 0;
}
