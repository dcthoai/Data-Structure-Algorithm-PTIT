import java.util.Scanner;

public class Main {
	public void Sinh_to_hop(int a[], int n, int k) {
		while(true) {
			int i = k;
			while(i>0 && a[i] == n-k+i)
				--i;
			if(i==0)
				return;
			a[i]++;
			for(int j=i+1; j<=k; ++j)
				a[j] = a[i] + j - i;
			System.out.print(" ");
			for(int j=1; j<=k; ++j)
				System.out.print(a[j]);
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int k = sc.nextInt();
			int a[] = new int [k+1];
			for(int i=1; i<=k; ++i) {
				a[i] = i;
				System.out.print(a[i]);
			}
			new Main().Sinh_to_hop(a, n, k);
			System.out.println();
			--t;
		}
		sc.close();
	}
}
