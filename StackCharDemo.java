
import java.util.Scanner;
import java.util.Stack;

public class StackCharDemo {

    public static void main(String[] args) {
        //Stack 
        //
        Scanner scr = new Scanner(System.in); 

        System.out.println("Enter String");
        String str = scr.next();

        Stack<Character> s = new Stack<>();

        for (int i = 0; i < str.length(); i++) {
            s.push(str.charAt(i));
        }

        while(s.isEmpty() == false ){//false false f f f true
            System.out.print(s.pop());//l a y o r    
        }

    }
}
