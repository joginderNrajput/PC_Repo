
#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
         int min_dist = INT_MAX;
         for(int i=0; i<n; i++){
             for(int j=0; j<n; j++){
                 if((x == arr[i] && y == arr[j] || x == arr[j] && y == arr[i]) && min_dist > abs(i-j)){
                     min_dist == abs(i-j);
                 }
             }
         }
         if(min_dist > n)
         return -1;
         return min_dist;
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}