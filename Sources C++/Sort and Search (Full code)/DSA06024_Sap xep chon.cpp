#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, test = 1;
    cin>>n;
    int a[n];
    for(int &i : a)
        cin>>i;
    for(int i=0; i<n-1; ++i){
        int min = i;
        for(int j=i+1; j<n; ++j)
            if(a[j] < a[min])
                min = j;
        if(min != i)
            swap(a[i], a[min]);
        cout<<"Buoc "<<test<<": ";
        test++;
        for(int j : a)
            cout<<j<<' ';
        cout<<endl;
    }
    return 0;
}
