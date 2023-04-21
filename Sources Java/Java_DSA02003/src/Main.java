import java.util.Scanner;
import java.util.Vector;

public class Main {
	Vector<Character> v = new Vector<>();
	private boolean check = true;
	public void Try(int a[][], int n, int i, int j) {
		if(i==n-1 && j==n-1) {
			for (char c : v)
				System.out.print(c);
			System.out.print(" ");
			check = false;
			return;
		}
		if(a[i+1][j] == 1) {
			v.add('D');
			Try(a, n, i+1, j);
			v.remove(v.size()-1);
		}
		if(a[i][j+1] == 1) {
			v.add('R');
			Try(a, n, i, j+1);
			v.remove(v.size()-1);
		}	
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int a[][] = new int [n+1][n+1];
			for(int i=0; i<n; ++i)
				for(int j=0; j<n; ++j)
					a[i][j] = sc.nextInt();
			Main m = new Main();
			m.check = true;
			if(a[0][0] == 0)
				System.out.print(-1);
			else {
				m.Try(a, n, 0, 0);
				if(m.check == true)
					System.out.print(-1);
			}
			System.out.println();
			--t;
		}
		sc.close();
	}
}
