#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int k, n, cnt = 0;
        string s, a;
        cin>>k>>s;
        n = s.size();
        a = s;
        sort(a.begin(), a.end(), greater<char>());

        while(k) {
            if(cnt >= n)
                break;
            char c = s[cnt];
            int index = -1;
            for(int i = n-1; i>cnt; --i) {
                if(s[i] > c) {
                    c = s[i];
                    index = i;
                }
            }
            if(c > s[cnt]) {
                swap(s[cnt], s[index]);
                if(s == a)
                    break;
                --k;
            }
            ++cnt; 
        }
        cout<<s<<endl;
    }
    return 0;
}
