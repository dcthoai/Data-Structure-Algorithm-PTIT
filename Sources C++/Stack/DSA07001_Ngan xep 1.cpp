#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    string s;
    int x;
    while(cin>>s){
        switch (s[1]){
            case 'u':{
                cin>>x;
                v.push_back(x);
                break;
            }
            case 'o':{
                v.erase(v.end()-1);
                break;
            }
            case 'h':{
                if(v.size()){
                    for(int i : v)
                        cout<<i<<' ';
                    cout<<endl;
                }else 
                    cout<<"empty"<<endl;
                break;
            }
        }
    }
    return 0;
}
