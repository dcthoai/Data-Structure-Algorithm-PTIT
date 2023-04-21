import java.util.Scanner;

public class Main {
	private boolean column[] = new boolean [105];
	private boolean diagonal[] = new boolean [105];
	private boolean reverseDiagonal[] = new boolean [105];
	private int count = 0;
	
	public void trySortQueen(int i, int n) {
		for(int j=1; j<=n; ++j) {
			if(column[j] && diagonal[i-j+n] && reverseDiagonal[i+j-1]) {
				column[j] = false;
				diagonal[i - j + n] = false;
				reverseDiagonal[i + j - 1] = false;
				if(i==n) {
					count++;
				}else
					trySortQueen(i+1, n);
				column[j] = true;
				diagonal[i - j + n] = true;
				reverseDiagonal[i + j - 1] = true;
			}
		}
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int test = sc.nextInt();
		while(test>0) {
			int tableSize = sc.nextInt();
			Main check = new Main();
			for(int i=0; i<=100; ++i) {
				check.column[i] = true;
				check.diagonal[i] = true;
				check.reverseDiagonal[i] = true;
			}
			check.trySortQueen(1, tableSize);
			System.out.println(check.count);
			check.count = 0;
			--test;
		}
		sc.close();
	}
}
