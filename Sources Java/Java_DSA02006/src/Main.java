import java.util.Arrays;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class Main {
	private boolean checkAns = true;
	
	public boolean check(int a[], int b[], int n, int k) {
		int sum = 0;
		for(int i=0; i<n; ++i)
			if(a[i] == 1)
				sum+=b[i];
		if(sum == k)
			return true;
		return false;
	}
	
	public void nextBinary(int a[], int b[], int n, int k) {
		while(true) {
			if(check(a, b, n, k)) {
				checkAns = false;
				boolean test = true;
				System.out.print("[");
				for(int i=0; i<n; ++i)
					if(a[i] == 1) {
						if(test) {
							System.out.print(b[i]);
							test = false;
						}else
							System.out.print(" " + b[i]);
					}
				System.out.print("] ");
			}
			int i = n-1;
			while(i>=0 && a[i] == 0) {
				a[i] = 1;
				--i;
			}
			if(i<0)
				return;
			a[i] = 0;
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int k = sc.nextInt();
			int a[] = new int [n];
			int b[] = new int [n];
			for(int i=0; i<n; ++i) {
				a[i] = 1;
				b[i] = sc.nextInt();
			}
			Arrays.sort(b);
			Main m = new Main();
			m.nextBinary(a, b, n, k);
			if(m.checkAns)
				System.out.print("-1");
			System.out.println();
			--t;
		}
		sc.close();
	}
}
