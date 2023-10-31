#include <bits/stdc++.h>
using namespace std;
int n;
pair<int,int> s[100000];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i=0; i<n;i++)
    cin >> s[i].second >> s[i].first;
  
  sort(s,s+n);
  int t=0;
  int a=0;
  for(int i=0;i<n;i++){
    if(t>s[i].second) continue;
    t=max(t,s[i].first);
    a++;
  }
  cout << a;
}