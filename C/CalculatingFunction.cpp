#include <bits/stdc++.h>
using namespace std;

int main(){
  double n;
  cin>>n;
  long long res = (floor(n/2)*(floor(n/2)+1)-ceil(n/2)*ceil(n/2));
  cout<<res<<endl;
}