import java.util.Scanner;

public class Q3 {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int[] notes={2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    System.out.print("Enter amount in rupees: ");
    int amount=sc.nextInt();

    System.out.println("\nDenomination breakdown for ₹" + amount + ":");

    for(int i=0;i<notes.length;i++) {
      int note=notes[i];
      if (amount>=note) {
        int count=amount/note;
        amount%=note;
        System.out.printf("%d %drs notes\n",count,note);
      }
    }

    sc.close();
  }
}

