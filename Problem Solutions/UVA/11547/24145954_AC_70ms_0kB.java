import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();

        for (int i = 1; i <= n; i++) {
            int n1 = inp.nextInt();
            
            n1 = (((n1 * 63) + 7492) * 5) - 498;
            n1 /= 10;
            n1 %= 10;

            if (n1 < 0)
            System.out.println(-n1);
            else
            System.out.println(n1);
        }
        inp.close();
    }
}