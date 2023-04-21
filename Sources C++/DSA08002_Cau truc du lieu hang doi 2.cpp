#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	queue<int> q;
	while(n--){
		string s;
		cin>>s;
		switch (s[1]){
			case 'U':{
				int x;
				cin>>x;
				q.push(x);
				break;
			}
			case 'O':{
				if(!q.empty())
					q.pop();
				break;
			}
			case 'R':{
				if(q.empty())
					cout<<"NONE"<<endl;
				else
					cout<<q.front()<<endl;
				break;
			}
		}
	}
	return 0;
}


