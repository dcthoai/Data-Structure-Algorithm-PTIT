#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin>>n;
	deque<int> dq;
	while(n--){
		string s;
		cin>>s;
		switch (s[1]){
			case 'U':{
				cin>>x;
				if(s[4] == 'F')
					dq.push_front(x);
				else
					dq.push_back(x);
				break;
			}
			case 'O':{
				if(!dq.empty()){
					if(s[3] == 'F')
						dq.pop_front();
					else
						dq.pop_back();
				}
				break;
			}
			case 'R':{
				if(dq.empty())
					cout<<"NONE"<<endl;
				else{
					if(s[5] == 'F')
						cout<<dq.front()<<endl;
					else
						cout<<dq.back()<<endl;
				}
				break;
			}
		}
	}
	return 0;
}


