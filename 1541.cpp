#include <bits/stdc++.h>
using namespace std;
string str;
vector<string> split(string s, string sep){
  vector<string> r;
  int pos=0;
  while(pos<s.size()){
    int nxt=s.find(sep, pos);
    if(nxt==-1) nxt=s.size();
    if(pos<nxt)
      r.push_back(s.substr(pos,nxt-pos));
    pos=nxt+sep.size();
  }
  return r;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> str;
  vector<string> vs=split(str,"-");
  int a=0;
  int c=0;
  int b=1;
  for(auto s:vs){
    vector<string> tmp=split(s,"+");
    for(auto t:tmp){
      c+=stoi(t);
    }
    a+=c*b;
    c=0;
    b=-1;
  }
  cout << a;
}