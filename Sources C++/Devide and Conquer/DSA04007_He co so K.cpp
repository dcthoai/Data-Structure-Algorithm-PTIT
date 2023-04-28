#include<bits/stdc++.h>
using namespace std;

string sumK(string bigNum, string smallNum, int k) {
    char c = k - 1 + '0';
    int n = bigNum.size(), m = smallNum.size(), mind = 0;
    for(int i=0; i<n-m; i++)
        smallNum = "0" + smallNum;
    for(int i=n-1; i>=0; i--) {
        bigNum[i] += smallNum[i] - '0' + mind;
        if(bigNum[i] > c){
            bigNum[i] -= k;
            mind = 1;
        } else
            mind = 0;
    }
    if(mind)
        bigNum = "1" + bigNum;
    return bigNum;
}

int main() {
    int t, k;
    string x, y;
    cin>>t;
    while(t--) {
        cin>>k>>x>>y;
        if(x.size() > y.size())
            cout<<sumK(x, y, k)<<endl;
        else
            cout<<sumK(y, x, k)<<endl;
    }
    return 0;
}
