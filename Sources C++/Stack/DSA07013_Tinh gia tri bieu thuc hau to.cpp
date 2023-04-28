#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size(), result = 0;
        stack<int> numbers;
        for(int i=0; i<n; ++i){
            if(s[i] <= '9' and s[i] >= '0')
                numbers.push(s[i] - '0');
            else{
                int a = numbers.top();
                numbers.pop();
                switch (s[i]){
                    case '+':{
                        a += numbers.top();
                        break;
                    }
                    case '-':{
                        a = numbers.top() - a;
                        break;
                    }
                    case '*':{
                        a *= numbers.top();
                        break;
                    }
                    case '/':{
                        a = numbers.top() / a;
                        break;
                    }
                }
                numbers.pop();
                numbers.push(a);
            }
        }
        result = numbers.top();
        cout<<result<<endl;
    }
}