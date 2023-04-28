#include<bits/stdc++.h>
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
        stack<string> numbers;
        for(int i=n-1; i>=0; --i){
            if(isOperator(s[i])){
                string a = numbers.top();
                numbers.pop();
                string b = numbers.top();
                numbers.pop();
                numbers.push("(" + a + s[i] + b + ")");
            }else
                numbers.push(string(1, s[i]));
        }
        cout<<numbers.top()<<endl;
    }
}