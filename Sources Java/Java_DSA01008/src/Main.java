import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt(), k = sc.nextInt();
			Sinh_nhi_phan s = new Sinh_nhi_phan(n, k);
			s.Sinh();
			--t;
		}
		sc.close();
	}
}
