import java.util.Scanner;
public class test {

    public static String f(String check)
    {
        String ans = "";
        
        try{
            long num = Long.parseLong(check);
            ans = check + " can be fitted in:\n";
            if((num<=Byte.MAX_VALUE) && (num>=Byte.MIN_VALUE))
            {
                ans = ans.concat("* byte\n* short\n* int\n* long");
            }
            else if((num <= Short.MAX_VALUE) && (num >= Short.MIN_VALUE))
            {
                ans = ans.concat("* short\n* int\n* long");
            }
            else if((num <= Integer.MAX_VALUE) && (num >= Integer.MIN_VALUE))
            {
                    ans = ans.concat("* int\n* long");
            }
            else{
                    ans = ans.concat("* long");
            }
        }
  
        catch (NumberFormatException e)
        {
          
            ans = check+" can't be fitted anywhere.";
        }
        return ans;
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt() ;
        scanner.nextLine();
        
        for(int i=0; i<t;i++){
            String check = scanner.nextLine();
            System.out.println(f(check));
        }
    }
}