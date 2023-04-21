import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		n = sc.nextInt();
		int a[] = new int [n], b[] = new int [10005];
		for(int i=0; i<n; ++i) {
			a[i] = sc.nextInt();
			b[a[i]]++;
		}
		for(int i=0; i<n; ++i) {
			if(b[a[i]] > 0) {
				System.out.print(a[i] + " ");
				b[a[i]] = 0;
			}
		}
	}
}
