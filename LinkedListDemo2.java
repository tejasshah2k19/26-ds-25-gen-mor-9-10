
import java.util.LinkedList;
import java.util.Scanner;

public class LinkedListDemo2 {

    public static void main(String[] args) {

        LinkedList<Integer> list = new LinkedList<>();

        Scanner scr = new Scanner(System.in);

        System.out.println("Enter 7 numbers");
        for (int i = 1; i <= 7; i++) {
            int num = scr.nextInt();
            list.add(num);
        }
        //10 20 30 40 50 60 70 

        //print all 
        System.out.println("All the data items from the linked list => ");
        for (Integer x : list) {
            System.out.println(x);
        }

        //find out max 
        int max = list.getFirst();// first element 
        for (Integer x : list) {
            if (max < x) {
                max = x;
            }
        }
        System.out.println("Max = " + max);

        //sum of all data 
        int sum =0;
        for (Integer x : list) {
            sum = sum + x; 
        }
        System.out.println("Sum = "+sum);
    }
}
