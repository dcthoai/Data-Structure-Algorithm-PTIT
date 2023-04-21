#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
    cin >> t;
    while(t--){
        int D, res = 0;
        cin>>D;
        int dem[30] = {};
        string s;
        cin >> s;
        for(char &i : s) 
			dem[i-'A']++;
        for(int i=0; i<26; ++i) 
			res = max(res, dem[i]);
			
        int k = s.size() - (D-1)*(res-1);
        if(res <= k) 
			cout<<1;
        else 
			cout<<-1;
        cout<<endl;
    }
	return 0;
}

