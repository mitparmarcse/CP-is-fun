#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
  ios::sync_with_stdio(false); cin.tie(NULL);
  string s;
  cin>>s;
  if(s[0]!=s[1] and s[0]!=s[2]){
    cout<<s[0];
  }
  else if(s[1]!=s[0] and s[1]!=s[2]){
    cout<<s[1];
  }
  else if(s[2]!=s[0] and s[1]!=s[2]){
    cout<<s[2];
  }
  else{
    cout<<-1;
  }
  return 0;
}