import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int k = sc.nextInt();
			Set<Integer> setNumber = new TreeSet<>();
			for(int i=0; i<n; ++i) {
				int x = sc.nextInt();
				setNumber.add(x);
			}
			if(setNumber.contains(k))
				System.out.println(1);
			else
				System.out.println(-1);
			--t;
		}
		sc.close();
	}
}
