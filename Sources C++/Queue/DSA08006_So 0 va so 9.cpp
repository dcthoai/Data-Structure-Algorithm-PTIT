#include<bits/stdc++.h>
using namespace std;

int check(int n, string s){
    long long tmp = 0;
    for(char i : s){
        tmp = tmp * 10 + i - '0';
        tmp %= n;
    }
    if(tmp == 0)
        return 1;
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	queue<string> q;
    	q.push("9");
    	while(1){
    		if(check(n, q.front())){
				cout<<q.front()<<endl;
				break;
			}else{
				q.push(q.front() + "0");
				q.push(q.front() + "9");
				q.pop();
			}
		}
	}
    return 0;
}
