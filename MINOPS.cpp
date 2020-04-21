#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	std::ios::sync_with_stdio(false); cin.tie(NULL);
	int t;
    cin>>t;
    
    while(t--)
    {
        string s, r;
        cin>>s>>r;
        if(s==r)
        {
            cout<<0<<endl;
            continue;
        }
        int n = s.size();
        vector<int>v;
        bool mismatch = 0;
        int match_count = 0;
        int mismatch_count = 0;
        int move_count = 0;
        int cost = INT_MAX;

        
        for(int i = 0; i<n; i++)
        {
            if(s[i]==r[i])
            {
                if(mismatch) match_count++;
            }
            else
            {
                if(!mismatch) move_count++;
                mismatch = 1;
                mismatch_count++;
                
                if(match_count>0)
                {
                    move_count++;
                    v.push_back(match_count);
                    match_count = 0;
                }
            }
        }
        
        sort(v.begin(), v.end());
        cost = move_count*mismatch_count;
        for(auto x:v)
        {
            mismatch_count+=x;
            move_count--;
            cost = min(cost, move_count*mismatch_count);
        }
        
        cout<<cost<<endl;
    }
    return 0;
}

