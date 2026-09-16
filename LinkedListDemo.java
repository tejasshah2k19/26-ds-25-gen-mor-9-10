/*
    [ 10 ]  [ 20 ]  [ 30 | X]
     node 
 */
// java.util
//LinkedList -> class 
import java.util.LinkedList;

public class LinkedListDemo {

    public static void main(String[] args) {

        LinkedList<Integer> list = new LinkedList<>();
        list.add(10);
        list.add(20);
        list.add(30);//at the end 

        //random order -> insert , deletion 
        System.out.println(list);

        System.out.println("Linked List : ");
        for (Integer data : list) {
            System.out.println(data);
        }

        //insert at beg ? 
        //yes 
        list.addFirst(40);//beg 

        System.out.println("Linked List : ");
        for (Integer data : list) {
            System.out.println(data);
        }

        //insert at location ? 
        //yes 
        //40 10 20 30
        list.add(2, 300);

        System.out.println("Linked List : ");
        for (Integer data : list) {
            System.out.println(data);
        }

        //deletion 
        //40 10 300 20 30 
        list.removeLast();//delete at end -> 30 remove  
        list.remove(1);//delete any --- index -> 10 remove 
        list.removeFirst();//delete at beg ---> 40 

        System.out.println("Linked List : ");
        for (Integer data : list) {
            System.out.println(data);
        }
        //300 20 
    }
}
