#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, sum;
        cin>>sum>>n;
        if(sum > 9*n)
            cout<<-1<<endl;
        else{
            string s = "";
	        for(int i=9; i>0; --i) {
	            while(sum >= i) {
	                sum -= i;
	                s += to_string(i);
	            }
	        }
	        int m = s.size();
	        reverse(s.begin(), s.end());
	        if(n > m){
	            s[0]--;
	            for(int i=1; i<n-m; ++i)
	                s = "0" + s;
	            s = "1" + s;
	        }
        	cout<<s<<endl;
        }
    }
    return 0;
}
