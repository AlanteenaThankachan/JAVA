import java.util.*;
public class Stringtokens 
{
 public static void main(String[]args)
 {
	 Scanner sc=new Scanner(System.in);
	 System.out.println("Enter the Line of Integer");
	 String add=sc.nextLine();
	 int sum=0;
	 StringTokenizer t=new StringTokenizer(add+" ");
	 System.out.println("Integers are :");
	 while(t.hasMoreTokens())
	 {
		 String p=t.nextToken();
		 int n=Integer.parseInt(p);
		 System.out.println(n);
		 sum=sum+n;
		 sc.close();
	 } 
	 System.out.println("Sum of all integers are "+sum);
	 
 }
}
