#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
  ios::sync_with_stdio(false); cin.tie(NULL);
  int year; cin>>year;
  int a,b,c,d;
  while(year++){

    a=year%10;
    b=year%100/10;
    c=year%1000/100;
    d=year%10000/1000;
    if(a != b && a != c && a != d && b!=c && b!=d && c!=d){
      cout<<year;
      return 0;
    }
    
  }

  
  return 0;
}