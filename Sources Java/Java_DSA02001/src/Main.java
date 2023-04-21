import java.util.Scanner;

public class Main {
	public void result(int a[], int n) {
		System.out.print("[" + a[0]);
		for(int i=1; i<n; ++i)
			System.out.print(" " + a[i]);
		System.out.println("]");
	}
	
	public void Try(int a[], int b[], int n) {
		if(n==0)
			return;
		result(a, n);
		for(int i=0; i<n-1; ++i){
			a[i] = b[i] + b[i+1];
		}
		Try(a, b, n-1);
	}
	
	 public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int a[] = new int [n];
			for(int i=0; i<n; ++i)
				a[i] = sc.nextInt();
			new Main().Try(a, a, n);
			--t;
		}
		sc.close();
	}
}
