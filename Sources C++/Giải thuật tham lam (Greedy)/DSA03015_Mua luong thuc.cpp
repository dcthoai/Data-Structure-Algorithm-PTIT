#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int N, S, M;
		cin>>N>>S>>M;
		if(N<M)
			cout<<-1<<endl;
		else{
			if(6*N < 7*M)
				cout<<-1<<endl;
			else{
				int food_in = 0, food_out = S*M, cnt = 0;
				for(int i=1; ++cnt; ++i){
					food_in += N;
					if(food_in >= food_out){
						cout<<cnt<<endl;
						break;
					}
				}
			}	
		}
	}
	return 0;
}
