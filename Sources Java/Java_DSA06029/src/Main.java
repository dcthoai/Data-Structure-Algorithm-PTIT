import java.util.Scanner;
import java.util.Vector;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int [n];
		for(int i = 0; i<n; ++i)
			a[i] = sc.nextInt();
		Vector<String> v = new Vector<>();
		String s = "";
		s += "Buoc 0: " + Integer.toString(a[0]);
		v.add(s);
		s = "";
		for(int i=1; i<n; ++i) {
			int x = a[i];
			int pos = i-1;
			while(pos>=0 && a[pos] > x) {
				int tmp = a[pos];
				a[pos+1] = tmp;
				pos--;
			}
			a[pos+1] = x;
			s += "Buoc " + Integer.toString(i) + ": ";
			for(int j=0; j<=i; ++j)
				s += Integer.toString(a[j]) + " ";
			v.add(s);
			s = "";
		}
		for(int i=v.size()-1; i>=0; --i)
			System.out.println(v.get(i));
		sc.close();
	}
}
