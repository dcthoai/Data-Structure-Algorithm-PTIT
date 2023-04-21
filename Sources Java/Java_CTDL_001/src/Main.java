import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		Vidu vd = new Vidu();
		vd.nhap(n);
		vd.sinh_nhi_nhan();
		sc.close();
	}
}
