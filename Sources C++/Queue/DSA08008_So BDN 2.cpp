#include <bits/stdc++.h>
using namespace std;

long long n;

bool check(string &s){
    long long tmp = 0;
    for(char &i : s){
        tmp = tmp * 10 + i - '0';
        tmp %= n;
    }
    if(tmp == 0)
        return 1;
    return 0;
}

string findNum(){
	queue<string> q;
    q.push("1");
    string s;
    while(1){
        s = q.front();
        q.pop();
        if(check(s)) 
            return s;
        q.push(s + "0");
        q.push(s + "1");
    }
    return "";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<findNum()<<endl;
    }
    return 0;
}
