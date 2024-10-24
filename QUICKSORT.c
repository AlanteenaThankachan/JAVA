package javalab;
import java.util.Scanner;
public class QuickS 
{
 public static int partition(int A[], int low, int high) 
 {
   int pivot = A[high];
   int i=low-1;
   for (int j=low;j<high;j++) 
   {
	 if(A[j]<=pivot) 
	 {
	    i++;
	    int temp=A[i];
	    A[i]=A[j];
	    A[j]=temp;
	  }
   }
     int temp=A[i+1];
	 A[i+1]=A[high];
	 A[high]=temp;
	 return(i+1);
  }
  public static void quicksort(int A[], int low, int high)  
  {       
    if(low<high) 
    {
	  int loc=partition(A,low,high);
	  quicksort(A,low,loc-1);
	  quicksort(A,loc+1,high);
	}
  }
  public static void main(String[] args) 
  {
	Scanner s=new Scanner(System.in);
	System.out.print("Enter the number of elements: \n");
	int len = s.nextInt();
	int num[] = new int[len];
	for (int i=0;i<len;i++) 
	{
	  System.out.print("Enter the " +(i+1)+ " element =\n");
	  num[i] = s.nextInt();
	}
	  System.out.println("Unsorted Array: ");
	  for (int i = 0; i < len; i++) 
	  {
        System.out.print(num[i] + " ");
	  }
	  System.out.println("\n");
	  quicksort(num, 0, len - 1);
	  System.out.println("Sorted Array: ");
	  for (int i=0;i<len;i++) 
	  {
	    System.out.print(num[i] + " ");
	  }
    }
  }
