
import java.util.Scanner;
import java.util.Stack;

public class StackMax {

    public static void main(String args[]) {

        Stack<Integer> stack = new Stack<>();
        int num;

        Scanner scr = new Scanner(System.in);
        for (int i = 1; i <= 5; i++) {
            System.out.println("Enter value ");
            num = scr.nextInt();

            stack.push(num);

        }

        int max = stack.pop();//40 

        while (stack.isEmpty()==false) {
            int tmp = stack.pop(); //50 

            if (tmp > max) {
                max = tmp;//50
            }
        }

        System.out.println("Max => "+max);

    }
}
