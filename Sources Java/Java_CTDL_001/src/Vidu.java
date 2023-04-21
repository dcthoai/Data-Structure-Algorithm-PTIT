
public class Vidu {
	private int n;
	private int a[];
	
	public Vidu() {
		a = new int[100];
		for(int i=0; i<100; ++i)
			a[i] = 0;
	}
	
	public void nhap(int x) {
		this.n = x;
	}
	
	public int check() {
		for(int i=0; i<n; ++i) {
			if(a[i] != a[n-i-1]) {
				return 0;
			}
		}
		return 1;
	}
	
	public void sinh_nhi_nhan() {
		while(true) {
			if(check()==1) {
				for(int i=0; i<n; ++i)
					System.out.print(a[i] + " ");
				System.out.print("\n");
			}
			int j = n-1;
			while(j>=0 && a[j]==1) {
				a[j] = 0;
				--j;
			}
			if(j<0)
				return;
			a[j] = 1;
		}
	}	
}
