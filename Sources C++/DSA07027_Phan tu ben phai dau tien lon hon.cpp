#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int &i : a) 
            cin >> i;
        stack<int> s;
        int ans[n];
        for (int i = 0; i < n; i++) {
            while(!s.empty() && a[s.top()] < a[i]) {
                ans[s.top()] = a[i];
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()) {
            ans[s.top()] = -1;
            s.pop();
        }
        for (int i = 0; i < n; i++) 
            cout << ans[i] << " ";
        cout<<endl;
    }
    return 0;
}
