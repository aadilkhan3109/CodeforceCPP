#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n+2]={0},p,tn=0,t;
  cin>>p;
  while(p--){
    cin>>t;
    arr[t] = 1;
  }
  cin>>p;
  while(p--){
    cin>>t;
    arr[t] = 1;
  }
  for(int i=1;i<=n;i++){
    if(arr[i]==0)break;
    tn++;
  }
  if(tn==n)cout<<"I become the guy."<<endl;
  else cout<<"Oh, my keyboard!"<<endl;
}