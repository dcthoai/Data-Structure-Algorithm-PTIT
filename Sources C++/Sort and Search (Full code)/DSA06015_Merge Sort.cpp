#include<bits/stdc++.h>
using namespace std;

void merge(int *a, int begin, int mid, int end){    
    int i = begin, j = mid + 1, n = end - begin + 1;
    int b[n], k = 0;
    while(i <= mid and j <= end){
    	if(a[i] < a[j]){
    		b[k] = a[i];
    		++i; ++k;
		}else{
			b[k] = a[j];
			++j; ++k;
		}
	}
	while(i<=mid){
		b[k] = a[i];
    	++i; ++k;
	}
	while(j<=end){
		b[k] = a[j];
    	++j; ++k;
	}
    for(i = begin; i<=end; ++i) 
		a[i] = b[i-begin];
}    
	  
void mergeSort(int a[], int begin, int end){  
    if(begin < end){  
        int mid = (begin + end) / 2;  
        mergeSort(a, begin, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, begin, mid, end);  
    }  
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; 
        int a[n];
        for(int &i : a)
        	cin>>i;
        mergeSort(a, 0, n-1);
        for(int i : a)
        	cout<<i<<' ';
		cout<<endl; 
    }
    return 0;
}

