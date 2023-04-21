#include<bits/stdc++.h>
using namespace std;

int a[8][8], MAX, cnt, cheo1[65], cheo2[65], cot[10];

void Back_track(int i){
    for(int j=0; j<8; ++j){
        if(!cot[j] && !cheo1[i-j+8] && !cheo2[i+j-1]){
            cot[j] = 1;
            cheo1[i-j+8] = cheo2[i+j-1] = 1;
            cnt += a[i][j];
            if(i==7){
            	MAX = max(MAX, cnt);
			}else
                Back_track(i+1);
            cot[j] = 0;
            cheo1[i-j+8] = cheo2[i+j-1] = 0;
            cnt -= a[i][j];
        }
    }
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0; i<8; ++i)
			for(int j=0; j<8; ++j)
				cin>>a[i][j];
		MAX = 0;
		cnt = 0;
		Back_track(0);
		cout<<MAX<<endl;
	}
	return 0;
}

