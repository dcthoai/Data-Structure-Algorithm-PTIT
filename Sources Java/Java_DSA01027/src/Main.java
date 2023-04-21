import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public int unused[] = new int [15];
	public int a[];
	
	public Main(int n) {
		for(int i=0; i<15; ++i)
			unused[i] = 1;
		a = new int [n+1];
		for(int i=1; i<=n; ++i)
			a[i] = i;
	}
	
	public void backtrackPermutation(int b[], int n, int i){
		for(int j = 1; j<=n; ++j) {
			if(unused[j] == 1) {
				a[i] = j;
				unused[j] = 0;
				if(i==n) {
					for(int k=1; k<=n; ++k)
						System.out.print(b[a[k]] + " ");
					System.out.println();
				}else
					backtrackPermutation(b, n, i+1);
				unused[j] = 1;
			}
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int [n+1];
		for(int i=1; i<=n; ++i)
			a[i] = sc.nextInt();
		Arrays.sort(a);
		Main m = new Main(n);
		m.backtrackPermutation(a, n, 1);
		sc.close();
	}
}
