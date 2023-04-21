import java.util.Set;
import java.util.TreeSet;
import java.util.Scanner;

public class setName {
	private int n, k;
	private int a[] = new int [20];
	private Set<String> setString = new TreeSet<>();
	private String arrayString[];
	
	public setName(Scanner sc) {
		String token;
		n = sc.nextInt();
		k = sc.nextInt();
		setString.add(" ");
		for(int i=0; i<n; ++i) {
			token = sc.next();
			setString.add(token);
		}
		for(int i=1; i<=k; ++i)
			 a[i] = i;
		n = setString.size()-1;
		arrayString = new String [setString.size()];
		setString.toArray(arrayString);
	}
	
	public void backtrackCombination(int i) { // Quay lui tổ hợp
		for(int j=a[i-1]+1; j<=n-k+i; ++j) {
			a[i] = j;
			if(i==k) {
				for(int c=1; c<=k; ++c)
					System.out.print(arrayString[a[c]] + " ");
				System.out.println();
			}else
				backtrackCombination(i+1);
		}
	}
}
