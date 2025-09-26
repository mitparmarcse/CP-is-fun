// Author: mit_1618
#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ffor(lb,ub) for(size_t i=lb;i<ub;i++)
#define rfor(ub,lb) for(size_t i=ub;i>=lb;i--)
using namespace std;

void solve(){
    int n;  cin>>n;
    string s;   cin>>s;
    string c;
    
    for(auto &i:s){
        i=tolower(i);
    }
    if(n<4){
        cout<<"NO\n";
        return;    
    }
    for(char &chr:s){
        if(c.empty()||c.back()!=chr){
            c.push_back(chr);
        }
    }
    if("meow"==c)    cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;

    
}

int32_t main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int test;	cin>>test;
	while(test--){
		solve();
	}

	return 0;
}
