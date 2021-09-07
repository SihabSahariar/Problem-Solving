import java.util.Scanner;
public class Main 
{
  public static void main(String []args) 
  {
    int count;
    Scanner scan = new Scanner(System.in);
    String nam;
    String nam1="Hajj";
    String nam2="Umrah";
    String nam3="*";
     for(count=1; (nam=scan.nextLine())!= null;count++)
     {
     
       
		 if (nam.equals(nam1)) 
    	{
			System.out.printf("Case %d: Hajj-e-Akbar\n",count);
		
    	}
 
    	else if (nam.equals(nam2)) 
    	{
    		System.out.printf("Case %d: Hajj-e-Asghar\n",count);
    	
		}
		else if(nam.equals(nam3))
		{
			break;
		}
		else
		{
			break;
		}

	}
 }
}