import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t > 0) {
			String str;
			str = sc.next();
			Sinh_nhi_phan xau_np = new Sinh_nhi_phan(str.length(), str);
			xau_np.Sinh();
			--t;
		}
	}
}
