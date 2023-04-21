import java.util.Scanner;

public class Main {
	public void Tower(int n, char a, char b, char c ) {
	    if(n==1) {
	        System.out.println(a + " -> " + c);
	        return;
	    }
	    Tower(n-1,a,c,b);
	    Tower(1,a,b,c);
	    Tower(n-1,b,a,c);
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		char a = 'A', b = 'B', c = 'C';
		new Main().Tower(n, a, b, c);
		sc.close();
	}
}
