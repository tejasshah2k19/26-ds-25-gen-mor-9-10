
import java.util.ArrayList;
import java.util.Scanner;

public class ArrayListDemo {



    public static void main(String[] args) {
        
        Scanner scr = new Scanner(System.in);
        int totalElelemts ;
        ArrayList<Integer> list  = new ArrayList<>();


        System.out.println("How many elements you want to store");
        totalElelemts = scr.nextInt(); 

        for(int i=1;i<=totalElelemts;i++){
            System.out.println("Enter element : ");
            int num = scr.nextInt(); 
            list.add(num);
        }

        System.out.println("All data : ");
        for(int i=0;i<list.size();i++){
            System.out.println(list.get(i));
        }





    }


    public static void main_old(String[] args) {

        int arr[] = new int[5]; // 5 size int 

        ArrayList<Integer> list = new ArrayList<Integer>();//generic type safety parameter 

        // list[0] =10; // wrong 
        list.add(10); //0th index 
        list.add(20);//1st index 
        list.add(30);//2nd index

        // System.out.println(list[0]); //wrong 
        System.out.println(list.get(0));//10
        System.out.println(list.get(1));//20
        System.out.println(list.get(2));//30 

        //total elements 
        System.out.println("size => "+list.size());

        //loop 
        for(int i=0;i<list.size();i++){
            System.out.println(list.get(i)); //list[i]
        }
    }
}
