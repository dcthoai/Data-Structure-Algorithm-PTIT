#include<iostream>
using namespace std;


int swap_5(int n){
    string s = to_string(n);
    for(int i=0; i<s.size(); ++i)
        if(s[i] == '5')
            s[i] = '6';
    return stoi(s);
}

int swap_6(int n){
    string s = to_string(n);
    for(int i=0; i<s.size(); ++i)
        if(s[i] == '6')
            s[i] = '5';
    return stoi(s);
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<swap_6(a) + swap_6(b);
    cout<<' '<<swap_5(a)+swap_5(b)<<endl;
    return 0;
}
