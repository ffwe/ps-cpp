#include <bits/stdc++.h>
using namespace std;
int n;
int rs[100000];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> rs[i];
  }
  sort(rs,rs+n);
  int a=0;
  for(int i = 1; i <= n; i++)
      a=max(a,rs[n-i]*i);
  cout << a;
  return 0;
}