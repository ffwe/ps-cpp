#include <bits/stdc++.h>
using namespace std;
int n;
int h[1000];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i=0;i<n;i++)
    cin >> h[i];
  sort(h,h+n);
  int sum=0;
  for(int i=0; i<n;i++)
    for(int j=0;j<=i;j++)
      sum+=h[j];
  cout << sum;
  return 0;
}