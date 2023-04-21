import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class Main {
	public void nextCombination(int a[], int b[], int n, int k) {
		while(true) {
			for(int i=1; i<=k; ++i)
	            System.out.print(b[a[i]] + " ");
	        System.out.print('\n');
			int i = k;
			while(i>0 && a[i] == n-k+i)
				--i;
			if(i==0)
				return;
			a[i]++;
			for(int j=i+1; j<=k; ++j)
				a[j] = a[i] + j - i;
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		int a[] = new int [k+1], b[] = new int [25], tmp, j = 1;
		for(int i=1; i<=k; ++i)
			a[i] = i;
		Set<Integer> setInteger = new TreeSet<>();
		for(int i=1; i<=n; ++i) {
			tmp = sc.nextInt();
			setInteger.add(tmp);
		}
		for(int i : setInteger) {
			b[j] = i;
			++j;
		}
		new Main().nextCombination(a, b, j-1, k);
		sc.close();
	}
}