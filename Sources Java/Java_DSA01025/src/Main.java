import java.util.Scanner;

public class Main {
	public void setName(int a[], String s, int n, int k, int i) {
		for(int j=a[i-1]+1; j<=n-k+i; ++j) {
			a[i] = j;
			if(i==k) {
				for(int c=1; c<=k; ++c)
					System.out.print(s.charAt(a[c]-1));
				System.out.println();
			}else
				setName(a, s, n, k, i+1);
		}
	}
	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int k = sc.nextInt();
			String s = "";
			for(char i='A'; i<'A'+n; ++i)
				s += i;
			int a[] = new int [k+1];
			for(int i=1; i<=k; ++i)
				a[i] = i;
			new Main().setName(a, s, n, k, 1);
			--t;
		}
		sc.close();
	}
}
