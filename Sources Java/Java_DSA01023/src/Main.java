import java.util.Scanner;

public class Main {
	public boolean check(int a[], int b[], int k) {
		for(int i=1; i<=k; ++i)
			if(a[i] != b[i])
				return false;
		return true;
	}

	public void Sinh_to_hop(int a[], int b[], int n, int k) {
		int cnt = 1;
		while(true) {
			if(check(a, b, k))
				break;
			int i = k;
			while(i>0 && a[i] == n-k+i)
				--i;
			if(i==0)
				break;
			a[i]++;
			for(int j=i+1; j<=k; ++j)
				a[j] = a[i] + j - i;
			++cnt;
		}
		System.out.println(cnt);
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0){
			int n = sc.nextInt();
			int k = sc.nextInt();
			int a[] = new int [k+1], b[] = new int [k+1];
			for(int i=1; i<=k; ++i) {
				b[i] = sc.nextInt();
				a[i] = i;
			}
			new Main().Sinh_to_hop(a, b, n, k);
			--t;
		}
		sc.close();
	}
	
}
