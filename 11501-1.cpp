#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
      cin >> arr[i];
    
    int maxv=0;
    long long ans=0;
    for(int i = n-1; i >= 0; i--){
      if(maxv>arr[i])
        ans+=maxv-arr[i];
      else
        maxv=arr[i];
    }
    cout << ans << endl;
  }
  return 0;
}