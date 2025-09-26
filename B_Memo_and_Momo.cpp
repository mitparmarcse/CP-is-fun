// Author: mit_1618
#include<bits/stdc++.h>
#define endl '\n'
#define ffor(lb,ub) for(size_t i=lb;i<ub;i++)
#define rfor(ub,lb) for(size_t i=ub;i>=lb;i--)
using ll=long long;
using namespace std;

void solve(){
    ll a,b,k;  cin>>a>>b>>k;
    if(a%k==0 and b%k!=0){
        cout<<"Memo"<<endl;
    }
    else if(a%k!=0 and b%k==0){
        cout<<"Momo"<<endl;
    }
    else if(a%k==0 and b%k==0){
        cout<<"Both"<<endl;
    }
    else{
        cout<<"No One"<<endl;
    }
}

int32_t main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

	return 0;
}
