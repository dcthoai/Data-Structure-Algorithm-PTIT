import java.util.Scanner;

public class Main {
	private int unused[] = new int [15];
	
	public void backtrackPermutation(int a[], String s, int n, int i) {
		for(int j=1; j<=n; ++j) {
			if(unused[j] == 1) {
				a[i] = j;
				unused[j] = 0;
				if(i==n) {
					for(int k=1; k<=n; ++k)
						System.out.print(s.charAt(a[k]-1));
					System.out.print(" ");
				}else
					backtrackPermutation(a, s, n, i+1);
				unused[j] = 1;
			}
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			String s = sc.next();
			Main m = new Main();
			int n = s.length();
			int a[] = new int [n+1];
			for(int i=1; i<=n; ++i) {
				m.unused[i] = 1;
				a[i] = i;
			}
			m.backtrackPermutation(a, s, n, 1);
			System.out.println();
			--t;
		}
		sc.close();
	}
}
