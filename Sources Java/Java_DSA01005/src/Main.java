import java.util.Scanner;

public class Main {
	public void Sinh_hoan_vi(int a[], int n) {
		while(true) {
			int j = n-1; 
			while(j>0 && a[j] > a[j+1])
				--j;
			if(j==0)
				return;
			int i = n; 
			while(a[j] > a[i])
				--i;
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			int l = j+1, r = n;
			while(l<r) {
				temp = a[l];
				a[l] = a[r];
				a[r] = temp;
				++l;
				--r;
			}
			System.out.print(" ");
			for(int k=1; k<=n; ++k)
				System.out.print(a[k]);
			
		}
	}
	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int a[] = new int [n+1];
			for(int i=1; i<=n; ++i) {
				System.out.print(i);
				a[i] = i;
			}
			new Main().Sinh_hoan_vi(a, n);
			System.out.println();
			--t;
		}
		sc.close();
	}
}
