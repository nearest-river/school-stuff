import java.util.*;

public class Q4 {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    System.out.print("Enter a number: ");
    int num=sc.nextInt();
    System.out.println();

    if(num<0) {
      System.out.println("Invalid Input");
      sc.close();
      return;
    }

    int count=0;
    int bits=32;
    for(int i=0;i<bits;i++) {
      int mask=1<<i;
      if((num&mask)!=0) {
        count++;
      }
    }

    System.out.printf("number of total 1's in %d: %d\n",num,count);
    if(count%2==0) {
      System.out.printf("%d isn't odious\n",num);
    } else {
      System.out.printf("%d is odious\n",num);
    }
    sc.close();
  }
}



