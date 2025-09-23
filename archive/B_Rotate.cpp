#include <bits/stdc++.h>
using namespace std;

signed main() {
  
  int n;  cin>>n;
  int arr[n][n];
  string s;
  for(int i=0;i<n;i++){
    cin>>s;
    for(int j=0;j<n;j++){
      arr[i][j]=s[j]-'0';
    }
  }
  int temp=arr[0][0];
  for(int i=0;i<n-1;i++){
    arr[i][0]=arr[i+1][0];
  }
  for(int j=0;j<n-1;j++){
    arr[n-1][j]=arr[n-1][j+1];
  }
  for(int i=n-1;i>0;i--){
    arr[i][n-1]=arr[i-1][n-1];
  }
  for(int j=n-1;j>1;j--){
    arr[0][j]=arr[0][j-1];
  }
  arr[0][1]=temp;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j];
    }
    cout<<endl;
  }
  return 0;
}
