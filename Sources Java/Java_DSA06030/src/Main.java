import java.util.Scanner;
import java.util.Vector;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0) {
			int n = sc.nextInt();
			int a[] = new int [n];
			for(int i=0; i<n; ++i)
				a[i] = sc.nextInt();
			Vector<String> v = new Vector<>();
			String s = "";
			int test = 1;
			boolean check = false;
			for(int i=n-1; i>0; --i) {
				check = false;
				for(int j=0; j<i; ++j) {
					if(a[j] > a[j+1]) {
						int tmp = a[j];
						a[j] = a[j+1];
						a[j+1] = tmp;
						check = true;
					}
				}
				if(check) {
					s += "Buoc " + Integer.toString(test) + ": ";
					for(int j : a)
						s += Integer.toString(j) + " ";
					v.add(s);
					s = "";
					test++;
				}else
					break;
			}
			for(int i=v.size()-1; i>=0; --i)
				System.out.println(v.get(i));
			--t;
		}
		sc.close();
	}
}
