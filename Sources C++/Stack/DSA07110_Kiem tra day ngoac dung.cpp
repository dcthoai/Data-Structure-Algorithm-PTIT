#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size(), cnt = n;
        stack<int> st;
        for(int i=0; i<n; ++i){
            if(s[i] == ')'){
                if(st.empty() == false and s[st.top()] == '('){
                    st.pop();
                    cnt -= 2;
                }
            }else{
                if(s[i] == ']'){
                    if(st.empty() == false and s[st.top()] == '['){
                        st.pop();
                        cnt -= 2;
                    }
                }else{
                    if(s[i] == '}'){
                        if(st.empty() == false and s[st.top()] == '{'){
                            st.pop();
                            cnt -= 2;
                        }
                    }else  
                        st.push(i);
                }
            }
        }
        if(cnt)
            cout<<"NO"<<endl;
        else    
            cout<<"YES"<<endl;
    }
    return 0;
}