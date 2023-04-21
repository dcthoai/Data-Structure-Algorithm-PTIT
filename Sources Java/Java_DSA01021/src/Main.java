import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int k = sc.nextInt();
			int a[] = new int [k+1];
			for(int i=1; i<=k; ++i)
				a[i] = sc.nextInt();
			Sinh_to_hop s = new Sinh_to_hop(a, n, k);
			s.Sinh();
			--t;
		}
		sc.close();
	}
}
