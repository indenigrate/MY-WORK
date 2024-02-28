import java.util.*;  

class Arr_Basics{

    Scanner in=new Scanner(System.in);
    void printArray(int arr[]){
        int n=arr.length;
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        return;
    }

    int[] removeEven(int []arr){
        int []oddOnly=new int[arr.length];
        int last=0,size=arr.length;
        for(int i=0;i<size;i++){
            if(arr[i]%2!=0){
                oddOnly[last++]=arr[i];
            }
        }
        int []array1=new int[last];
        for(int i=0;i<last;i++){
            array1[i]=oddOnly[i];
        }
        return array1;
    }

    int [] reverseArray(int []arr){
        int size=arr.length;
        int []reverse=new int[size];

        // for(int i=0;i<(size+1.2)/2;i++){
        //     reverse[i]=arr[size-1-i];
        //     reverse[size-1-i]=arr[i];
        // }
        int start=0,end=size-1;
        while(start<end){
            reverse[start]=arr[end];
            reverse[end--]=arr[start++];
        }

        return reverse;
    }

    void secondMax(int []arr){
        if(arr==null || arr.length==0){
            throw new IllegalArgumentException("Invalid Input");
        }
        int max1=arr[0],max2=arr[0],size=arr.length;
        for(int i=0;i<size;i++){
            if(arr[i]>max1){
                max2=max1;
                max1=arr[i];
            }
            else if(arr[i]>max2&&arr[i]!=max1){
                max2=arr[i];
            }
        }
        System.out.println("2nd max term is "+max2);
    }

    void moveZeroes(){
        int []a={1,2,3,0,5,6,0,0,0,8,56,42,34,0};
        int j=0;
        
        printArray(a);

        for (int i=0;i<a.length;i++){
            if(a[i]!=0&&a[j]==0){
                int temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }

            if(a[j]!=0){
                j++;
            }
        }
        printArray(a);
    }

    int[] resize(int a[],int size){
        int []temp=new int[size];
        for(int i=0;i<a.length;i++){
            temp[i]=a[i];
        }
        return temp;

    }

    void isPalin(){
        String s;
        s=in.next();
        int start=0;
        int end=s.length()-1;
        while(start<end){
            if(s.charAt(start++)!=s.charAt(end--)){
                System.out.println(s+" is not palindrome");
                return;
            }
        }
        System.out.println(s+" is palindrome");
    }

    public static void main(String []args){
        
        int []Array={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        System.out.format("%d %d\n",Array[1],Array.length); 
        //  or  int []myArray=new int[50];
        //  or  int []myArray={1,2,3,4,5,6};
        Arr_Basics ob=new Arr_Basics();

        ob.printArray(Array);
        ob.printArray(ob.removeEven(Array));
        ob.printArray(ob.reverseArray(Array));
        ob.secondMax(Array);
        ob.moveZeroes();
        ob.printArray(ob.resize(Array, Array.length*2));

        ob.isPalin();
    }
}