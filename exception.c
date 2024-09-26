import java.util.Scanner;
public class Exception 
{
	public static void main (String[]args)
	{
		int ch=2;
		do {
	Scanner sc=new Scanner(System.in);
	System.out.println("Choose an operation");
	System.out.println("1.Arithematic operation");
	System.out.println("2.Array Access ");
	int choice=sc.nextInt();
	switch(choice)
	{
	case 1:
		try {
			System.out.println("Enter Numerator: ");
			int numerator=sc.nextInt();
			System.out.println("Enter Denominator: ");
			int denominator=sc.nextInt();
			int result=numerator/denominator;
			System.out.println("Result="+result);
		}catch(ArithmeticException e)
		{
			System.out.println("Arithmetic exception "+e.getMessage());
		}
		break;
	case 2:
		
		
	int[]number= {1,2,3};
	  try{
		  System.out.println("Enter array index to access");
		  int index=sc.nextInt();
		  System.out.println("At index"+index+":"+number[index]);
	}
	  catch(ArrayIndexOutOfBoundsException e)
	  {
		System.out.println("Array index out of bound "+e.getMessage());
	  }
	
	default:
		
		System.out.println("Invalid Choice.Please select 1 or 2 ");
		break;
	}
	}
		while(ch!=0);
	}
	}
