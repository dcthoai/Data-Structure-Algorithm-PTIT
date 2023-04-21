#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		deque<int> dq;
		int n, i;
		cin>>n;
		while(n--){
			cin>>i;
			switch (i){
				case 1:{
					cout<<dq.size()<<endl;
					break;
				}
				case 2:{
					if(dq.empty())
						cout<<"YES"<<endl;
					else
						cout<<"NO"<<endl;
					break;
				}
				case 3:{
					int x;
					cin>>x;
					dq.emplace_back(x); //cho x vao cuoi queue
					break;
				}
				case 4:{
					if(!dq.empty())
						dq.pop_front();
					break;
				}
				case 5:{
					if(dq.empty())
						cout<<-1<<endl;
					else
						cout<<dq.front()<<endl;
					break;
				}
				case 6:{
					if(dq.empty())
						cout<<-1<<endl;
					else
						cout<<dq.back()<<endl;
					break;
				}
			}
		}
	}
	return 0;
}


