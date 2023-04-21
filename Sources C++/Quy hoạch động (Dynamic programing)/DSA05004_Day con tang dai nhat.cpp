#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main(){
	faster();
	int n;
    cin>>n;
    int a[n];
    for(int &i : a)
        cin>>i;
    int res[n], count = 0;
    for(int i=0; i<n; i++) {
        int max = 0;
        for(int j=0; j<i; j++) {
            if(a[j] < a[i]) {
                if(max < res[j])
                    max = res[j];
            }
        }
        res[i] = max + 1;
        count = (count < res[i]) ? res[i] : count;
    }
    cout<<count<<endl;
	return 0;
}

