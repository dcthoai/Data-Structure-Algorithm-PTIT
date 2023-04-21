import java.util.Scanner;

public class Main {
	public boolean Check(char a[], int n) {
		if(a[n-1] == 'H')
			return false;
		for(int i=0; i<n-1; ++i)
			if(a[i] == 'H' && a[i+1] == 'H')
				return false;
		return true;
	}
	
	public void Sinh_AB(char a[], int n) {
		while(true) {
			if(Check(a, n)) {
				for(char c : a)
					System.out.print(c);
				System.out.println();
			}
			int i = n-1; 
			while(i>=0 && a[i] == 'H') {
				a[i] = 'A';
				--i;
			}
			if(i<0)
				return;
			a[i] = 'H';
		}

	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			char a[] = new char [n];
			a[0] = 'H';
			for(int i=1; i<n; ++i)
				a[i] = 'A';
			new Main().Sinh_AB(a, n);
			--t;
		}
		sc.close();
	}
}
