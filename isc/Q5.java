import java.util.Scanner;

public class Q5 {
  static boolean isLeap(int year) {
    return (year%400==0) || (year%4==0 && year%100 != 0);
  }

  static int daysInMonth(int month, int year) {
    switch (month) {
      case 1: case 3: case 5: case 7:
      case 8: case 10: case 12:
        return 31;
      case 4: case 6: case 9: case 11:
        return 30;
      case 2:
        return isLeap(year) ? 29 : 28;
      default:
        return -1;
    }
  }

  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    int day=sc.nextInt();
    int month=sc.nextInt();
    int year=sc.nextInt();
    int N=sc.nextInt();

    if (year<=0 || month<1 || month>12 || N<=0) {
      System.out.println("Invalid Input");
      sc.close();
      return;
    }

    int maxDays=daysInMonth(month, year);
    if (day<1 || day>maxDays) {
      System.out.println("Invalid Input");
      sc.close();
      return;
    }

    // Add N days
    while (N>0) {
      day++;
      if (day>daysInMonth(month, year)) {
        day=1;
        month++;
        if (month>12) {
          month=1;
          year++;
        }
      }
      N--;
    }

    System.out.println("PROJECT SUBMISSION");
    System.out.printf("DATE : %02d/%02d/%04d\n", day, month, year);
    sc.close();
  }
}
