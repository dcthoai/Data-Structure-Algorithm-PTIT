import java.util.Arrays;
import java.util.Scanner;
import java.util.TreeSet;
import java.util.Vector;
import java.util.Set;

public class Main {
	private int n, a[];
	private Vector<Integer> tmp = new Vector<>();
	private Set<String> setAns = new TreeSet<>();
	
	public void result() {
		String s = "";
		for(int i : tmp) 
			s += Integer.toString(i) + " ";
	    setAns.add(s);
	}
	
	public void Try(int i){
		for(int j = i+1; j<=n; ++j){
	        if(a[j] > a[i]){
	            tmp.add(a[j]);
	            if(tmp.size() > 1) 
					result();
	            Try(j);
	            tmp.remove(tmp.size()-1);
	        }
	    }
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Main m = new Main();
		m.n = sc.nextInt();
		m.a= new int [m.n+1];
		for(int i=1; i<=m.n; ++i)
			m.a[i] = sc.nextInt();
		m.Try(0);
		for (String string : m.setAns) {
			System.out.println(string);
		}
		sc.close();
	}
}
