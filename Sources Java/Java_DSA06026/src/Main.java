import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int [n];
		for(int i=0; i<n; ++i)
			a[i] = sc.nextInt();
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
				System.out.print("Buoc " + test + ": ");
				for(int j : a)
					System.out.print(j + " ");
				System.out.println();
				test++;
			}else
				break;
		}
	}
}
