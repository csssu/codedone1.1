
import java.util.Scanner;

public class cd01 {
 public static void main(String[] args) {
  Scanner scan = new Scanner(System.in);

  long n = scan .nextLong();

  long[] dollerBills = {100, 20, 10, 5, 1};

  int sum = 0;
  int index = 0;
  label:
  while (n > 0) {

   while (n >= dollerBills[index]) {
    sum += n / dollerBills[index];
    n = n % dollerBills[index];

    if (n == 0) break label;
   }

   index++;
  }

  System.out.println(sum);
 }
}