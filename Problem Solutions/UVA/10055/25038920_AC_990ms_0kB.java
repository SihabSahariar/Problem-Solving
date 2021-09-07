import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner myScanner=new Scanner(System.in);
       
        long a,b;
       
        while(myScanner.hasNext()){
            a=myScanner.nextLong();
            b=myScanner.nextLong();
            if (a>b) {
                System.out.println(a-b);
            }
            else {
                System.out.println(b-a);
            }
        }
    }

}