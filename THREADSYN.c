import java.util.Scanner;
class Table
{
    void printTable(int n) 
    {
        synchronized (this)
        {
            for (int i = 1; i <= 10; i++) 
            { 
                System.out.println(n + "*" + i + "=" + n * i);
                try 
                {
                    Thread.sleep(400);
                } 
                catch (Throwable e) 
                {
                    System.out.println(e);
                }
            }
        }
    }
}
class Mytab1 extends Thread 
{
    Table t;
    int n;
    Mytab1(Table t)
    {
        this.t = t;
    }
    public void run() 
    {
        t.printTable(n);
    }
}
class Mytab2 extends Thread 
{
    Table t;
    int n;
    Mytab2(Table t) 
    {
        this.t = t;
    }

    public void run() 
    {
        t.printTable(n);
    }
}
public class ThreadSynchronization 
{
    public static void main(String[] args)
    {
        Table tb = new Table();
        Scanner sc=new Scanner(System.in);
        Mytab1 t1 = new Mytab1(tb); 
        Mytab2 t2 = new Mytab2(tb);
        System.out.println("Enter the First number= ");
        t1.n=sc.nextInt();
        System.out.println("Enter the Second number= ");
        t2.n=sc.nextInt();
        t1.start();
        System.out.println("------------------------");
        t2.start();
    }
}
