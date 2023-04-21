public class Sinh_nhi_phan {
	int a[];
	int n;
	int k;
	
	public Sinh_nhi_phan(int x, int y) {
		n = x;
		k = y;
		a = new int [n];
		for(int i=0; i<n; ++i)
			a[i] = 0;
	}
	
	public boolean check() {
		int cnt = 0;
		for(int i=0; i<n; ++i) {
			if(a[i] == 1)
				++cnt;
		}
		if(cnt == k)
			return true;
		return false;
	}
	public void Sinh() {
		while(true) {
			if(check() == true) {
				for(int i : a)
					System.out.print(i);
				System.out.println();
			}
			int j = n-1;
			while(j>=0 && a[j] == 1) {
				a[j] = 0;
				--j;
			}
			if(j<0)
				return;
			a[j] = 1;
		}
	}
}
