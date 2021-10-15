#include <bits/stdc++.h>
using namespace std;

int main(){
  string a,b,res="";
  getline(cin,a);
  getline(cin,b);

  for (int i = 0; i < a.length(); i++){
    if(a[i]==b[i]) res+='0';
    else res+='1';
  }
  cout<<res<<endl;
}