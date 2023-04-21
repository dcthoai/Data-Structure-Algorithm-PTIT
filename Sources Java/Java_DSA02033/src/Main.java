import java.util.Scanner;
import java.lang.Math;

public class Main {
	private int unused[] = new int [15];
	
	public boolean check(int a[], int n) {
		for(int i=1; i<n; ++i)
			if(Math.abs(a[i] - a[i+1]) == 1)
				return false;
		return true;
	}
	
	public void backtrackPermutation(int a[], int n, int i) {
		for(int j=1; j<=n; ++j) {
			if(unused[j] == 1) {
				a[i] = j;
				unused[j] = 0;
				if(i==n) {
					if(check(a, n)) {
						for(int k=1; k<=n; ++k)
							System.out.print(a[k]);
						System.out.println();
					}
				}else
					backtrackPermutation(a, n, i+1);
				unused[j] = 1;
			}
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int a[] = new int [15];
			for(int i=1; i<=n; ++i)
				a[i] = i;
			Main m = new Main();
			for(int i=1; i<=n; ++i)
				m.unused[i] = 1;
			m.backtrackPermutation(a, n, 1);
			--t;
		}
		sc.close();
	}
}
