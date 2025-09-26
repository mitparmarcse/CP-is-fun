// Author: mit_1618
#include<bits/stdc++.h>
#define endl '\n'
#define ffor(lb,ub) for(size_t i=lb;i<ub;i++)
#define rfor(ub,lb) for(size_t i=ub;i>=lb;i--)
using ll=long long;
using namespace std;

void solve(){
    int n,k;    cin>>n>>k;
    
    vector<string>s(n);
    for(string &str:s){
        cin>>str;
    }
    // if(n==1){cout<<1<<endl; return;}
    for(int i=0;i<k;i++){
        int members=s.size();
        for(int j=1;j<members;j++){
            if(s[j][i]!=s[0][i]){
                s.erase(s.begin()+j);
                members--;  i--;
            }
        }
    }
    cout<<s.size()<<endl;
}

int32_t main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	ll test;	cin>>test;
	while(test--){
		solve();
	}

	return 0;
}
