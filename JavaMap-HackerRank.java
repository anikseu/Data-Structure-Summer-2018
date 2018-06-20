// Problem : https://www.hackerrank.com/challenges/phone-book/
// Verdict : Accepted
import java.util.*;
import java.io.*;

class Solution{
 public static void main(String[] argh) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        for (int i = 0; i < n; i++) {
            String name = in.nextLine();
            int phone = in.nextInt();
            in.nextLine();
            map.put(name, phone);
        }
        while (in.hasNext()) {
            String s = in.nextLine();
            if (map.get(s) == null) {
                System.out.println("Not found");
            } else {
                int ret = map.get(s);
                System.out.println(s+"="+ret);
            }
        }
    }
}
