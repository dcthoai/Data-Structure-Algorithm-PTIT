import java.util.Scanner;

public class Main {
	public void Sinh_hoan_vi(int a[], int n) {
		int j = n-1;
		while(j>0 && a[j] > a[j+1])
			--j;
		if(j==0) {
			for (int i=1; i<=n; ++i)
				System.out.print(i + " ");
			System.out.println();
			return;
		}
		int i = n, temp;
		while(a[j] > a[i])
			--i;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		int l=i+1, r=n;
		while(l<r) {
			temp = a[l];
			a[l] = a[r];
			a[r] = temp;
			++l;
			--r;
		}
		for(int k=1; k<=n; ++k)
			System.out.print(a[k] + " ");
		System.out.println();
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int a[] = new int [n+1];
			for(int i=1; i<=n; ++i)
				a[i] = sc.nextInt();
			new Main().Sinh_hoan_vi(a, n);
			--t;
		}
		sc.close();
	}
}
