
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, k;
		n = sc.nextInt();
		k = sc.nextInt();
		int c[] = new int[100];
		for(int i=0; i<n; ++i)
			c[i] = sc.nextInt();
		vidu vd = new vidu();
		vd.nhap(n, k, c);
		vd.sinh_nhi_nhan();
		vd.print_count();
		sc.close();
	}
}
