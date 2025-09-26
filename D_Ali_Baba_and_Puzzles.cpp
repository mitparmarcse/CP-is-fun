// Author: mit_1618
#include<bits/stdc++.h>
#define endl '\n'
#define ffor(lb,ub) for(size_t i=lb;i<ub;i++)
#define rfor(ub,lb) for(size_t i=ub;i>=lb;i--)
#define pyes cout<<"YES"<<endl

using ll=long long;
using namespace std;

void solve(){
    ll a,b,c,d;    cin>>a>>b>>c>>d;
    // +-
    // +x
    // x+
    // x-
    // -x
    // -+
    if(a+b-c==d)    pyes;
    else if(a+b*c==d)  pyes;
    else if(a*b+c==d)   pyes;
    else if(a*b-c==d)   pyes;
    else if(a-b*c==d)   pyes;
    else if(a-b+c==d)   pyes;
    else cout<<"NO\n"; 
}

int32_t main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	solve();

	return 0;
}
