#include<bits/stdc++.h>
using namespace std;

long long countTriplets(long long *a, int n, long long ans){
    sort(a, a+n);
    long long count = 0;
    for(int i=0; i<n-2; i++){
        int j = i+1, k = n-1;
        while(j < k){
            if(a[i] + a[j] + a[k] >= ans)  //tim vi tri ma tong ba so a[i] a[j] a[k] bat dau nho hon ans
                k--;
            else{
                count += k-j;
                j++;
            }
        }
    }
    return count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		long long a[n];
		for(long long &i : a)
			cin>>i;
		cout<<countTriplets(a, n, k)<<endl;
	} 
	return 0;
}
