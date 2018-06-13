import java.util.Scanner;

/**
 *
 * @author Anik Chakrabortty
 * verdict: Accepted
 */
 
 
public class FlipSortUVA {

    public static int bubble_sort(int arr[], int n){
        int cnt=0; 
        
        for(int i=0; i<=n-2; i++){
            for(int j=0; j<=n-2-i; j++){
                if(arr[j]>arr[j+1]){
                   //swapping 
                   int tmp = arr[j+1]; 
                   arr[j+1]=arr[j];
                   arr[j]=tmp; 
                   cnt++;
                }
            }
        }
        
        return cnt; 
    }

public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in); 
        
        while(sc.hasNext()){
            int arr[] = new int[1001];
            int n = sc.nextInt(); 
            for(int i=0; i<n; i++){
                arr[i] = sc.nextInt(); 
            }
            int operator = bubble_sort(arr, n);
            System.out.println("Minimum exchange operations : "+operator); 
        }
        
        
    }
    
}
