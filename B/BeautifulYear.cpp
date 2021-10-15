#include <bits/stdc++.h>
using namespace std;
bool isB(string a){
  set<char> b;
  for(int i=0;i<4;i++){
    b.insert(a[i]);
  }
  return b.size()==4;
}
int main(){
  int y;
  cin>>y;
  while(!isB(to_string(++y)));
  cout<<y<<endl;
}