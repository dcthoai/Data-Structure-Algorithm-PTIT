import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int [n];
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
			System.out.print("Buoc " + (i+1) + ": ");
			for(int j : a)
				System.out.print(j + " ");
			System.out.println();
			sc.close();
		}
	}
}
