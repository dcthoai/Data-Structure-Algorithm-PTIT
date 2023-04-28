#include<bits/stdc++.h>
using namespace std;

string s = "";
int unused[100], n, a[100];

bool cmp(char c){
	if(c == 'A' || c == 'E')	
		return 1;
	return 0;
}

int check(){
	if(cmp(s[a[0]]) and cmp(s[a[n-1]]))		// Neu ki tu dau va cuoi trong s bang A-E hoac E-A thi return 1
		return 1;
	for(int i=1; i<n-1; ++i)
		if(cmp(s[a[i]]))
			if(!cmp(s[a[i-1]]) and !cmp(s[a[i+1]]))	
				return 0;
			// Neu ki tu thu i trong s bang A hoac E ma 2 ki tu ke no khac A va E thi return 0
	return 1;
}

void Quay_lui_hoan_vi(int i){
	for(int j=0; j<n; ++j){
		if(unused[j]){
			a[i] = j;
			unused[j] = 0;
			if(i==n-1){
				if(check()){
					for(int l=0; l<n; ++l)
						cout<<s[a[l]];
					cout<<endl;			
				}
			}
			else
				Quay_lui_hoan_vi(i+1);
			unused[j] = 1;
		}
	}
}

int main(){
	char c;
	cin>>c;
    for(char i='A'; i<=c; ++i)
    	s+=i;
    n = s.length();
    for(int i=0; i<n; ++i){
        unused[i] = 1;
        a[i] = i;
    }
    Quay_lui_hoan_vi(0);
	return 0;
}


