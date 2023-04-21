
public class Sinh_nhi_phan {
	char s[];
	int sz;
	
	public Sinh_nhi_phan(int n, String a) {
		sz = n;
		s = new char [n];
		for(int i=0; i<n; ++i)
			s[i] = a.charAt(i);
	}
	
	public void Sinh() {
		int i = sz-1;
		while(i>=0 && s[i] == '1'){
			s[i] = '0';
			--i;
		}
		if(i<0){
			System.out.print('0');
			for (char c : s)
				System.out.print(c);
			System.out.println();
			return;
		}else{
			s[i] = '1';
			for (char c : s)
				System.out.print(c);
			System.out.println();
		}
	}
}
