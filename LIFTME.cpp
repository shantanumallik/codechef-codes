#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ll t, n, q;
	ll f, d;
	ll current = 0;
	ll count = 0;
	cin>>t;
	while(t--)
	{
	    cin>>n>>q;
	    while(q--)
	    {
	        cin>>f>>d;
	        if(f==d) continue;
	        count+=abs(current - f) + abs(d - f);
	        current = d;

	    }
	    cout<<count<<endl;
	    count = 0;
	    current = 0;
	}
	
	return 0;
}

