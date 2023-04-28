#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int degin[1005], degout[1005];
    while(t--){
        int V, E, x, y;
        cin>>V>>E;
        memset(degin, 0, sizeof(degin));
        memset(degout, 0, sizeof(degout));
        for(int i=1; i<=E; ++i){
            cin>>x>>y;
            degin[x]++;
            degout[y]++;
        }
        int check = 0;
        for(int i=1; i<=V; ++i)
            if(degin[i] != degout[i]){
                check = 1;
                break;
            }
        if(check)
            cout<<0<<endl;
        else 
            cout<<1<<endl;
    }
    return 0;
}
