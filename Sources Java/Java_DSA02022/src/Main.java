import java.util.Scanner;

public class Main {
	public boolean check(int a[]) {
		if(a[4]==0 || a[3]==0 || a[2]==2 || (a[0]==0 && a[1]==0))
	        return false;
	    return true;
	}
	
	public void setDate(int a[]) {
		while(true) {
			if(check(a)) {
				System.out.print(a[0] + "" + a[1] + "/");
				System.out.print(a[2] + "" + a[3] + "/");
				for(int k=4; k<8; ++k)
					System.out.print(a[k]);
				System.out.println();
			}
			int i = 7;
			while(i>=0 && a[i] == 2) {
				a[i] = 0;
				--i;
			}
			if(i<0)
				return;
			a[i] = 2;
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a[] = new int [10];
		for(int i=0; i<8; ++i)
			a[i] = 0;
		Main m = new Main();
		m.setDate(a);
		sc.close();
	}
}
