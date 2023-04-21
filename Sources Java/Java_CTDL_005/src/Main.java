import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, x;
		n = sc.nextInt();
		int a[] = new int [n];
		for(int i=0; i<n; ++i)
			a[i] = sc.nextInt();
		x = sc.nextInt();
		for(int i=0; i<n; ++i)
			if(x != a[i])
				System.out.print(a[i] + " ");
	}
}
