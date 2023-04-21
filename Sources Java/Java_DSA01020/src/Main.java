import java.util.Scanner;

public class Main {
	public void Sinh_nhi_phan_nguoc(char a[], int n) {
		int i = n-1;
		while(i>=0 && a[i] == '0') {
			a[i] = '1';
			--i;
		}
		if(i<0) {
			for(char c : a)
				System.out.print('1');
			System.out.println();
			return;
		}
		a[i] = '0';
		for(char c : a)
			System.out.print(c);
		System.out.println();
	}
	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int n;
		while(t>0) {
			String S = sc.next();
			char a[] = new char [S.length()];
			for(int i=0; i<S.length(); ++i)
				a[i] = S.charAt(i);
			new Main().Sinh_nhi_phan_nguoc(a, S.length());
			--t;
		}
		sc.close();
	}
}
