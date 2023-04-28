#include<bits/stdc++.h>
using namespace std;

int main(){
    stack <int> v;
    string s;
    int x, n;
    cin>>n;
    while(n--){
        cin>>s;
        switch (s[1]){
            case 'U':{
                cin>>x;
                v.push(x);
                break;
            }
            case 'O':{
                if(!v.empty())
                    v.pop();
                break;
            }
            case 'R':{
                if(v.size())
                    cout<<v.top()<<endl;
                else 
                    cout<<"NONE"<<endl;
                break;
            }
        }
    }
    return 0;
}
