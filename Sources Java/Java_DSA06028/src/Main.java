import java.util.Scanner;
import java.util.Vector;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int [n];
		Vector<String> v = new Vector<>();
		String s = "";
		for(int i=0; i<n; ++i)
			a[i] = sc.nextInt();
		for(int i=0; i<n-1; ++i) {
			int min = i;
			for(int j=i+1; j<n; ++j)
				if(a[j] < a[min])
					min = j;
			if(min != i) {
				int tmp = a[i];
				a[i] = a[min];
				a[min] = tmp;
			}
			s += "Buoc " + Integer.toString(i+1) + ": ";
			
			for(int j : a)
				s += Integer.toString(j) + " ";
			v.add(s);
			s = "";
		}
		for(int i = v.size()-1; i>=0; --i)
			System.out.println(v.get(i));
		sc.close();
	}
}
