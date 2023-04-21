#include<bits/stdc++.h>
using namespace std;

int sequentialSearch(int *a, int n, int x){
    for(int i=0; i<n; ++i)
        if(a[i] == x)
            return 1;
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n, x;
	    cin>>n>>x;
	    int a[n];
	    for(int &i : a)
	        cin>>i;
	    if(sequentialSearch(a, n, x))
	        cout<<"1"<<endl;
	    else
	        cout<<"-1"<<endl;
	}
    return 0;
}

