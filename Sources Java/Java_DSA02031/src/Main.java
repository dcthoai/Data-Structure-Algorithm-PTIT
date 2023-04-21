import java.util.Scanner;

public class Main {
	public boolean ok(int c){
	    return (c == 1 || c == 5);
	}

	public boolean check(int a[], char b[], int n) {
		for(int i = 1; i <= n; ++i){
	        if(ok(a[i])){
	            if(i == 1 || i == n) 
					continue;
	            if(!ok(a[i-1]) && !ok(a[i+1]))
					return false;
	        }
	    }
		return true;
	}
	
	public void nextPermutation(int a[], char b[], int n) {
		while(true) {
			if(check(a, b, n)) {
				for(int i=1; i<=n; ++i)
					System.out.print(b[a[i]]);
				System.out.println();
			}
			int j = n-1;
			while(j>0 && a[j] > a[j+1])
				--j;
			if(j==0)
				return;
			int i = n;
			while(a[j] > a[i])
				--i;
			int tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
			int l=j+1, r = n;
			while(l<r) {
				tmp = a[l];
				a[l] = a[r];
				a[r] = tmp;
				++l;
				--r;
			}
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		char c = sc.next(".").charAt(0);
		int a[] = new int [50];
		char b[] = new char [50];
		int j = 1;
		for(char i = 'A'; i<=c; ++i)
			b[j++] = i;
		for(int i=1; i<=j; ++i)
			a[i] = i;
		Main m = new Main();
		m.nextPermutation(a, b, j-1);
		sc.close();
	}
}
