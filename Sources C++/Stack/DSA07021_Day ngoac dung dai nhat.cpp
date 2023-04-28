#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size(), maxSize = 0;
        stack<int> st;
        st.push(-1);
        for(int i=0; i<n; ++i){
            if(s[i] == ')'){
                st.pop();
                if(st.empty())
                    st.push(i); // Danh dau diem bat dau day ngoac dung moi
                else 
                    maxSize = max(maxSize, i - st.top());
            }else
                st.push(i);
        }
        cout<<maxSize<<endl;
    }
}
