import java.io.*;
import java.util.*;

public class SuperiorStr {
    static void characterCount(String inputString) {
        // Create HashMap
        HashMap<Character, Integer> charCountMap = new HashMap<Character, Integer>();
        char lastKey = ' ';
        int lastValue = 0;
        // Converting given String to Character Array
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

        Map<Character, Integer> hm1 = sortByValue(charCountMap);

        for (Map.Entry<Character, Integer> en : hm1.entrySet()) {
            lastKey = en.getKey();
            lastValue = en.getValue();
        }
//        System.out.println(lastKey);
        System.out.println(lastValue * 2 + 1);
    }

    public static HashMap<Character, Integer> sortByValue(HashMap<Character, Integer> hm) {
        // Create a list from elements of HashMap
        List<Map.Entry<Character, Integer>> list =
                new LinkedList<Map.Entry<Character, Integer>>(hm.entrySet());

        // Sort the list
        Collections.sort(list, new Comparator<Map.Entry<Character, Integer>>() {
            public int compare(Map.Entry<Character, Integer> o1,
                               Map.Entry<Character, Integer> o2) {
                return (o1.getValue()).compareTo(o2.getValue());
            }
        });

        // put data from sorted list to hash map
        HashMap<Character, Integer> temp = new LinkedHashMap<Character, Integer>();
        for (Map.Entry<Character, Integer> aa : list) {
            temp.put(aa.getKey(), aa.getValue());
        }
        return temp;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t != 0) {
            int n = Integer.parseInt(br.readLine());
            String y = br.readLine();
            characterCount(y);
            t--;
        }
    }
}
