import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			Set<Integer> setNumber = new TreeSet<>();
			for(int i=0; i<n; ++i) {
				int x = sc.nextInt();
				setNumber.add(x);
			}
			if(setNumber.size() < 2) {
				System.out.println(-1);
			}else {
				int cnt = 0;
				for(Integer i : setNumber) {
					if(cnt==2)
						break;
					System.out.print(i + " ");
					cnt++;
				}
				System.out.println();
			}
			--t;
		}
		sc.close();
	}
}
