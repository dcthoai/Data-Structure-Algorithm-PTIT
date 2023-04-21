#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c){
    return (c == '+') or (c == '-') or (c == '*') or (c == '/');
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        stack<string> st;
        for(int i=n-1; i>=0; --i){
            if(isOperator(s[i])){
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                st.push(a + b + s[i]);
            }else
                st.push(string(1, s[i]));
        }
        cout<<st.top()<<endl;
    }
}