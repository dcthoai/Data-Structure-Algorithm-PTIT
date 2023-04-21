import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int k = sc.nextInt();
			int index = 0;
			for(int i=1; i<=n; ++i) {
				int x = sc.nextInt();
				if(x == k)
					index = i;
			}
			System.out.println(index);
			--t;
		}
		sc.close();
	}
}
