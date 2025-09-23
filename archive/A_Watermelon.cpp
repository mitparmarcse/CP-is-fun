#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
  int n;    cin>>n;
  if((n&1)==0&&n!=2){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  return 0;

}