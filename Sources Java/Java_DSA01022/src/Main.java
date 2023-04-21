import java.util.Scanner;

public class Main {
	public boolean check(int a[], int b[], int n) {
		for(int i=1; i<=n; ++i) {
			if(a[i] != b[i])
				return false;
		}
		return true;
 	}
	
	public void Sinh_hoan_vi(int a[], int b[], int n) {
		int cnt = 1;
		while(true) {
			if(check(a, b, n) == true)
				break;
			int j = n-1; 
			while(j>0 && a[j] > a[j+1])
				 --j;
			if(j==0)
				break;
			int i = n;
			while(a[j] > a[i])
				--i;
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			int l = j+1, r = n;
			while(l<r) {
				tmp = a[l];
				a[l] = a[r];
				a[r] = tmp;
				++l;
				--r;
			}
			++cnt;
		}
		System.out.println(cnt);
	}
	
	public static void main(String[] args) {
		Scanner sc  = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int a[] = new int [n+1], b[] = new int [n+1];
			for(int i=1; i<=n; ++i) {
				b[i] = sc.nextInt();
				a[i] = i;
			}
			Main m = new Main();
		    m.Sinh_hoan_vi(a, b, n);
			--t;
		}
		sc.close();
	}
}
