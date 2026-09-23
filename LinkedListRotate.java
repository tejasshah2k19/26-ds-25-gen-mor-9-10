import java.util.LinkedList; 

public class LinkedListRotate{

    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>(); 
        
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(5);

        System.out.println(list);//1 2 3 4 5 

        int k=4; 
        for(int i=1;i<=k;i++){ 
        //rotate 
            list.add(0, list.get(list.size()-1));//5 1 2 3 4 5 
            list.remove(list.size()-1);//5 1 2 3 4 
        }

        System.out.println(list);


    }
}