#include<iostream>
using namespace std;

int main() {
    long long f[51];
    f[1] = 1;
    f[2] = 2;
    f[3] = 4;
    for(int i=4; i<=50; ++i)
        f[i] = f[i-1] + f[i-2] + f[i-3];
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<f[n]<<endl;
        /* Khi i<=3 tong so cach buoc len dinh thu i = tong so cach buoc len cac dinh ben duoi i
        f[i] = f[0] +...+ f[i-1]  va  f[i-1] = f[0] +...+ f[i-2] => f[i] = f[i-1] + f[i-1] = 2*f[i-1]  
        
        Khi i>k de leo le bac thu i thi chi co the leo len tu bac thu i-k -> i-1 nen
        so cach leo len den bac thu i chính là tong so cach de leo len cac bac trong khoang
        tu i-k den i-1 suy ra f[i] = f[i-1]*2 - f[i-k-1], vi hieu co the am nen cong them mod    */       
    }
    return 0;
}
