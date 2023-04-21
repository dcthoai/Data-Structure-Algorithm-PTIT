import java.util.Scanner;

public class Main {
	public void backtrackCombination(int b[], char a[], int n, int k, int i) {
		for(int j=b[i-1]+1; j<=n-k+i; ++j) {
			b[i] = j;
			if(i==k) {
				for(int x=1; x<=k; ++x)
					System.out.print(a[b[x]-1]);
				System.out.println();
			}else
				backtrackCombination(b, a, n, k, i+1);
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		char c = sc.next(".").charAt(0);
		char a[] = new char [30];
		int k = sc.nextInt();
		int j = 0;
		for(char i='A'; i<=c; ++i)
			a[j++] = i;
		int b[] = new int [j+1];
		for(int i=1; i<=k; ++i)
			b[i] = i;
		new Main().backtrackCombination(b, a, j, k, 1);
		sc.close();
	}
}
