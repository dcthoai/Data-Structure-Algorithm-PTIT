#include<bits/stdc++.h>
using namespace std;

int n, ans = 0, cheo1[105], cheo2[105], cot[105];

void Back_track(int i){
    for(int j=1; j<=n; ++j){
        if(!cot[j] && !cheo1[i-j+n] && !cheo2[i+j-1]){
            cot[j] = 1;
            cheo1[i-j+n] = 1;
            cheo2[i+j-1] = 1;
            if(i==n)
                ++ans;
            else
                Back_track(i+1);
            cot[j] = 0;
            cheo1[i-j+n] = 0;
            cheo2[i+j-1] = 0;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        ans = 0;
        Back_track(1);
        cout<<ans<<endl;
    }
    return 0;
}
