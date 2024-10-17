import java.util.*;
import java.io.*;
class EvenNum implements Runnable
{
	public int a;
	public EvenNum(int a)
	{
		this.a=a;
	}
		public void run()
		{
		System.out.println("The Thread "+a+" is even and square of "+a+" is "+a*a);
		}
}
class OddNum implements Runnable
{
	public int a;
	public OddNum(int a)
		{
			this.a=a;
		}
	public void run()
		{
			System.out.println("The Thread "+a+" is odd and cube of "+a+" is "+a*a*a);
		}
}
	class RandomNumGenerator extends Thread
	{
		public void run()
		{
			int n=0;
			Random r=new Random();
			try
			{
				for(int i=0;i<6;i++)
				{
					n=r.nextInt(20);
					System.out.println("Generated Number is "+n);
					if(n%2==0)
					{
						Thread t1=new Thread(new EvenNum(n));
						t1.start();
					}
					else
					{
						Thread t2=new Thread(new OddNum(n));
						t2.start();
					}
					Thread.sleep(1000);
					System.out.println("_________________________________");
				}
			}
			catch(InterruptedException ex)
			{
				System.out.println(ex.getMessage());
			}
		}
}
public class MultiThreading 
{
public static void main(String[]args)
{
	RandomNumGenerator rn=new RandomNumGenerator();
	rn.start();
 }
}
