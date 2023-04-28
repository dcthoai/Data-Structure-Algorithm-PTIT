#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x, index = 0;
        cin >> n >> k;
        for(int i=1; i<=n; ++i){
        	cin>>x;
        	if(x==k)
        		index = i;
		}
		cout<<index<<endl;
    }
    return 0;
}
