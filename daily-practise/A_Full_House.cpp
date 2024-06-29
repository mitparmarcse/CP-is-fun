#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
  ios::sync_with_stdio(false); cin.tie(NULL);
  int arr[5];
  int freq_arr[14]={0};
  int c1=0,c2=0;
  for(int i=0;i<5;i++){
    cin>>arr[i];
    freq_arr[arr[i]]++;
  }
  for(int i=1;i<14;i++){
    if(freq_arr[i]==2){
        c1++;
    }
    else if(freq_arr[i]==3){
        c2++;
    }
  }
  (c1==1&&c2==1)?cout<<"Yes":cout<<"No";
  return 0;
}