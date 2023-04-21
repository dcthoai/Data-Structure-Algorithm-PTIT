import java.util.Scanner;

public class Main {
	public void result(int a[], int n) {
		System.out.print("[" + a[0]);
		for(int i=1; i<n; ++i)
			System.out.print(" " + a[i]);
		System.out.print("] ");
	}
	
	public void Try(int a[], int n) {
		if(n==0)
			return;
		int c[] = new int [n];
		for(int i=0; i<n-1; ++i){
			c[i] = a[i] + a[i+1];
		}
		Try(c, n-1);
		result(a, n);
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int a[] = new int [n];
			for(int i=0; i<n; ++i)
				a[i] = sc.nextInt();
			new Main().Try(a, n);
			System.out.println();
			--t;
		}
		sc.close();
	}
}