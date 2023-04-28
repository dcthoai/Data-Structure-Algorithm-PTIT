#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, sum;
    cin>>n>>sum;
    if(sum > 9*n || sum == 0)
        cout<<"-1 -1";
    else {
        string s = "";
        for(int i=9; i>0; --i) {
            while(sum >= i) {
                sum -= i;
                s += to_string(i);
            }
        }
        int m = s.size();
        string s2 = s;
        reverse(s.begin(), s.end());
        if(n > m){
            for(int i=0; i<n-m; ++i)
                s2 += "0";
            s[0]--;
            for(int i=1; i<n-m; ++i)
                s = "0" + s;
            s = "1" + s;
        }
        cout<<s<<' '<<s2;
    }
    return 0;
}
