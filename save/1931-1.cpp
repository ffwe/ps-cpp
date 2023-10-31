#include <bits/stdc++.h>
using namespace std;
int n;
pair<int, int> v[100005];
int main(void){
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> v[i].second >> v[i].first;
  }
  sort(v, v+n);
  int t=0;
  int answer=0;
  for(const auto& p : v){
    if(t>p.second) continue;
    t=p.first;
    answer++;
  }
  cout << answer;
  return 0;
}