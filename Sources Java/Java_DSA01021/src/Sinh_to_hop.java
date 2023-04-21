import java.util.Arrays;

public class Sinh_to_hop {
	private int n, k, cnt = 0;
	private int a[], b[];
	
	public Sinh_to_hop(int x[], int n, int k) {
		this.n = n;
		this.k = k;
		a = new int [k+1];
		b = new int [k+1];
		for(int i=1; i<=k; ++i) {
			this.a[i] = x[i];
			this.b[i] = x[i];
		}
	}
	
	public void Sinh() {
		int i = k; 
		while(i>0 && a[i] == n-k+i)
			--i;
		if(i==0) {
			System.out.println(k);
			return;
		}
		a[i]++;
		for(int j=i+1; j<=k; ++j)
			a[j] = a[i] + j - i;
		Arrays.sort(a);
		Arrays.sort(b);
		for(int j=1; j<=k; ++j)
			if(Arrays.binarySearch(a, b[j]) >= 0)
				++cnt;
		System.out.println(k-cnt);
	}
}
