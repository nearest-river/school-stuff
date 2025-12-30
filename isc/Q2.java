import java.util.Scanner;

public class Q2 {
  static char decodeChar(char c, int shift) {
    int pos=c-'A';
    int decoded=pos+shift;
    decoded%=26;
    return (char) ('A'+decoded);
  }

  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    String codedText=sc.nextLine();
    int shift=sc.nextInt();

    if (shift<1 || shift>26) {
      System.out.println("Invalid entry");
      sc.close();
      return;
    }

    // Remove spaces between 6-char blocks
    codedText=codedText.replace(" ", "");

    StringBuilder decoded=new StringBuilder();

    for (int i=0; i<codedText.length(); i++) {
      char c=codedText.charAt(i);

      if (c<'A' || c>'Z') {
        System.out.println("Invalid entry");
        sc.close();
        return;
      }

      decoded.append(decodeChar(c, shift));
    }

    String decodedText=decoded.toString();

    // Replace QQ with space
    StringBuilder finalText=new StringBuilder();
    for (int i=0; i<decodedText.length(); i++) {
      if (i<decodedText.length()-1 &&
        decodedText.charAt(i)=='Q' &&
        decodedText.charAt(i+1)=='Q') {
        finalText.append(' ');
        i++; // skip next Q
      } else if (decodedText.charAt(i)=='Q') {
        // single Q is invalid
        System.out.println("Invalid entry");
        sc.close();
        return;
      } else {
        finalText.append(decodedText.charAt(i));
      }
    }

    System.out.println("Decoded Text -> "+finalText.toString());

    sc.close();
  }
}

