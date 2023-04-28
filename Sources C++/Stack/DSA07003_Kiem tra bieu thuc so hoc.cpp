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
    	stack<char> st;
    	int check = 0;
    	for(char &i : s){
    		if(i == ')'){
    			check = 0;
    			char temp = st.top();
    			while(temp != '('){
    				if(isOperator(temp))
    					check = 1;
    				st.pop();
    				temp = st.top();
				}
				st.pop();
				if(check == 0)
					break;
			}else
				st.push(i);
		}
		if(check)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
    return 0;
}
