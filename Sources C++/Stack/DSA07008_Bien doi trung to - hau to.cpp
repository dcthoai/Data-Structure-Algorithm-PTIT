#include<bits/stdc++.h>
using namespace std;

int degree(char c){
    if(c == '^') 
        return 5;
    if(c == '*' || c == '/') 
        return 4;
    if(c == '+' || c == '-') 
        return 3;
    return 2;
}

bool isOperator(char c){
    return (c == '+') or (c == '-') or (c == '*') or (c == '/') or (c == '^');
}

int main(){
    int t;
    cin >> t;
    string s;
    while(t--){
        string res = "";
        cin >> s;
        int n = s.size();
        stack<char> st;
        for(int i = 0; i < n; i++){
            if(isalpha(s[i])) 
                res += s[i];
            else{
                if(isOperator(s[i])){
                    while(st.size() && degree(st.top()) >= degree(s[i])){
                        res += st.top();
                        st.pop();
                    }
                    st.push(s[i]);
                }else{
                    if(s[i] == ')'){
                        while(st.size() && st.top() != '('){
                            res += st.top();
                            st.pop();
                        }
                        st.pop();
                    }else 
                        st.push(s[i]);
                }
            }
        }
        while(st.size()){
            if(st.top() != '(') 
                res += st.top();
            st.pop();
        }
        cout << res << endl;
    }
    return 0;
}