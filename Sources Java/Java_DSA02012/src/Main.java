import java.util.Scanner;

public class Main {
	private int ans = 0;
	
	public void Try(int n, int m, int i, int j) {
		if(i==n-1 && j==m-1) {
			ans++;
			return;
		}
		if(i < n-1)
			Try(n, m, i+1, j);
		if(j < m-1)
			Try(n, m, i, j+1);
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int m = sc.nextInt();
			int a[][] = new int [n][m];
			for(int i=0; i<n; ++i)
				for(int j=0; j<m; ++j)
					a[i][j] = sc.nextInt();
			Main s = new Main();
			s.Try(n, m, 0, 0);
			System.out.println(s.ans);
			s.ans = 0;
			--t;
		}
		sc.close();
	}
}
