#include<bits/stdc++.h>
using namespace std;

int check(string a){
    if(a[4] == '0' || a[3] == '0' || a[2]=='2'|| (a[0]=='0' && a[1]=='0'))
        return 0;
    return 1;
}


void Sinh_nhi_phan(string s){
    while(1){
        if(check(s)){
            for(int i=0; i<s.length(); ++i){
                if(i==2 || i==4)
                    cout<<'/';
                cout<<s[i];
            }
            cout<<endl;
        }
        int j = s.length()-1;
        while(j>=0 && s[j] == '2'){
            s[j] = '0';
            --j;
        }
        if(j<0)
            return;
        s[j] = '2';
    }
}

int main(){
    string s = "00000000";
    Sinh_nhi_phan(s);
    return 0;
}
