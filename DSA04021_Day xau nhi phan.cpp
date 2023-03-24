#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

long long fi[100];
string s = " 01";

int main() {
    faster();
    fi[1] = fi[2] = 1;
    for(int i=3; i<93; ++i)
        fi[i] = fi[i-2] + fi[i-1];
    int t;
    cin>>t;
    while(t--) {
        long long n, k;
        cin>>n>>k;
        while(n>2) {
            if(k <= fi[n-2])
                n-=2;
            else {
                k -= fi[n-2];
                --n;
            }
        }
        cout<<s[n]<<endl;
    }
    return 0;
}
