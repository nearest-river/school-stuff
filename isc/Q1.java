import java.util.Scanner;


public class Q1 {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    System.out.println("Enter two numbers: ");
    int m=sc.nextInt();
    int n=sc.nextInt();

    int count=0;
    for (int i=m;i<=n;i++) {
      if(is_fascinating(i)) {
        System.out.print(i+" ");
        count++;
      }
    }

    System.out.println();
    System.out.println("The frequency of fascinating numbers: "+count);
    sc.close();
  }

  static boolean is_fascinating(int num) {
    int num2=num*2;
    int num3=num*3;

    long concat_num=num;
    concat_num=(concat_num*1000)+num2;
    concat_num=(concat_num*1000)+num3;

    long c_num=concat_num;

    boolean[] lookup_table=new boolean[9];
    for(int i=0;c_num>0 && i<10;i++) {
      int digit=(int)(c_num%10);
      if(digit==0) {
        continue;
      }

      lookup_table[digit-1]=true;
      c_num/=10;
    }

    for(int i=0;i<lookup_table.length;i++) {
      if(!lookup_table[i]) {
        return false;
      }
    }

    return true;
  }
}
