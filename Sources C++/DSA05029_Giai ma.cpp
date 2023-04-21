//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		string s;
//		cin>>s;
//		if(s[0] == '0')
//			cout<<0<<endl;
//		else{
//			int n = s.size(), dp[50] = {};
//			dp[0] = dp[1] = 1;
//	        for(int i = 2; i <= n; ++i){
//	            if(s[i-1] > '0') 
//					dp[i] = dp[i-1];
//	            if(s[i-2] == '1' or (s[i-2] == '2' && s[i-1] < '7')) 
//					dp[i] += dp[i-2];
//	        }
//	        cout<<dp[n]<<endl;
//		}	
//	}
//	return 0;
//}


#include<stdio.h>

int main() {
    int t, n, i;
    long long f[51];
    f[1] = 1;
    f[2] = 2;
    f[3] = 4;
    for(i=4; i<=50; ++i)
        f[i] = f[i-1] + f[i-2] + f[i-3];
    scanf("%d", &t);
    while(t){
        scanf("%d", &n);
        printf("%lld\n", f[n]);
        --t;
    }
}

