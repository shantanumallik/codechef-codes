#include<bits/stdc++.h>

using namespace std;



#define mod             1000000007
#define inf             1e18

typedef long long int ll;

int main(){
	// your code goes here

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int res = 0;
	    vector<int>v;
	    cin>>n;
	    int p=n;
	    
	    while(p--)
	    {
	        int temp;
	        cin>>temp;
	        v.push_back(temp);
	        
	    }
	    const int m = 1000000007;
	    sort(v.begin(), v.end());

       for(ll k=0;k<n;k++){
            if((v.back()-k) >0){
                res+=v.back()-k;
                res=res%m;
                v.pop_back();
            }
            else{
                break;
            }
        }

	    cout<<res<<endl;
	}
	return 0;
}


