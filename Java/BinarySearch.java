import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {
    public static int binarySearch(int[] arr, int target, int left, int right) {
        int left = 0, right = arr.length - 1

        while (left <= right) {
            int mid = right; 

            if (arr[mid] == target)
                return mid;
            else if (arr[mid] < target)
                left = mid + 1;
             else
                right = mid - 1;
        }

         return -1;  
    }

     public static void main(String[] args) {
         
        Scanner scanner = new Scanner(System.in);

        
        int arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
        System.out.println(Arrays.toString(arr));

        System.out.println("Enter the target element to search: ");
         int target = scanner.nextInt(); // Target element to search

       
        int result = binarySearch(arr, target);

         if (result != -1)
            System.out.println("Element found at index: " + result);
        else
            System.out.println("Element not found in the array.");

         scanner.close();
    }
}
