
public class vidu {
	private int n, k, count = 0;
	private int a[], b[];
	
	public vidu() {
		a = new int[100];
		b = new int[100];
		for(int i=0; i<100; ++i)
			a[i] = 0;	
	}
	
	public void nhap(int x, int y, int c[]) {
		this.n = x;
		this.k = y;
		for(int i=0; i<n; i++) {
			b[i] = c[i];
		}
	}
	
	public int check() {
		int sum = 0;
		for(int i=0; i<n; ++i)
			if(a[i]==1)
				sum+=b[i];
		if(sum==k)
			return 1;
		return 0;
	}
	
	public void print_count() {
		System.out.println(count);
	}
	
	public void sinh_nhi_nhan() {
		while(true) {
			if(check()==1) {
				for(int i=0; i<n; ++i)
					if(a[i]==1)
						System.out.print(b[i] + " ");
				System.out.println();
				count++;
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
