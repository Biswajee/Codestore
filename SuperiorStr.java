import java.io.*;
import java.util.*;

public class SuperiorStr {
    static void characterCount(String inputString) {
        // Create HashMap
        HashMap<Character, Integer> charCountMap = new HashMap<Character, Integer>();

        // Converting givrn String to Character Array
        char strarray[] = inputString.toCharArray();

        // Checking each char of strArray
        for (char c : strarray) {
            if (charCountMap.containsKey(c)) {
                // If Character is present in charCountMap,
                // Increment its counter by 1.

                charCountMap.put(c, charCountMap.get(c) + 1);
            } else {
                // If Character not present in charCountMap,
                // Putting his character to charCountMap with 1 as its value
                charCountMap.put(c, 1);
            }
        }
        for (Map.Entry entry : charCountMap.entrySet()) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }
    }

    public static void main() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t != 0) {
            String y = br.readLine();
            characterCount(y);
            t--;
        }
    }
}
