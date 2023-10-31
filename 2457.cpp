#include <bits/stdc++.h>
using namespace std;
#define E first
#define S second
int n;
vector<pair<int,int>> f;  // Change to use vector of arrays
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    int sm,sd,em,ed;
    cin >> sm >> sd >> em >> ed;
    f.push_back({em*100+ed,sm*100+sd});
  }
  sort(f.begin(), f.end());
  int a=0;
  int t=0;
  for (int i = 0; i < n; i++) {
    if (t > f[i].S) continue;
    t = max(t,f[i].E);
    a++;
  }
  cout << a;
  return 0;
}
