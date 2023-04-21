import java.util.Scanner;

public class Main {
	public void Sinh_xau_AB(char a[], int n) {
		while(true) {
			for (char i : a)
				System.out.print(i);
			System.out.print(" ");
			int j = n-1;
			while(j>=0 && a[j] == 'B') {
				a[j] = 'A';
				--j;
			}
			if(j<0)
				return;
			a[j] = 'B';
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			char a[] = new char [n];
			for(int i=0; i<n; ++i)
				a[i] = 'A';
			new Main().Sinh_xau_AB(a, n);
			System.out.println();
			--t;
		}
		sc.close();
	}
}
