#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
  ios::sync_with_stdio(false); cin.tie(NULL);
  int starth=21,startmin=0;
  int n; cin>>n;
  if(n<60){
    startmin+=n;
    if(startmin<10)
    cout<<starth<<":0"<<startmin;
    else
    cout<<starth<<":"<<startmin;
  }
  else{
    starth++;
    startmin+=n%60;
    if(startmin<10)
    cout<<starth<<":0"<<startmin;
    else
    cout<<starth<<":"<<startmin;
  }

  return 0;
}
