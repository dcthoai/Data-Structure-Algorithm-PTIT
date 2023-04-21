import java.util.Scanner;

public class Main {
	public boolean check(int a[], int n) {
		if(a[n] != 6)
			return false;
		for(int i=1; i<n; ++i)
			if(a[i] == 8 && a[i+1] == 8)
				return false;
		for(int i=1; i<=n; ++i) {
			if(a[i]==6) {
				int cnt  = 0;
				for(int j=i; j<=n; ++j) {
					if(a[j]==6)
						cnt++;
					if(a[j]==8) {
						i = j;
						break;
					}	
				}
				if(cnt > 3)
					return false;
			}
		}
		return true;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int [n+1];
		a[1] = 8;
		for(int i=2; i<=n; ++i)
			a[i] = 6;
		Main m = new Main();
		while(true) {
			int i = n;
			while(i>0 && a[i]==8) {
				a[i] = 6;
				--i;
			}
			if(i==0)
				break;
			a[i] = 8;
			if(m.check(a, n)) {
				for(int j=1; j<=n; ++j)
					System.out.print(a[j]);
				System.out.println();
			}
		}
	}
}
