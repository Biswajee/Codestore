import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        Document arr[] = new Document[4];
        for(int i=0; i<4; i++) {
            int id = sc.nextInt();
            sc.nextLine();
            String title = sc.nextLine();
            String fname = sc.nextLine();
            int pg = sc.nextInt();
            arr[i] = new Document(id,pg,title,fname);
        }

        ArrayList<Document> d = docsWithOddPages(arr);
        Collections.sort(d, new Sortbyid());
        for(Document w : d) {
            System.out.println(w.id + " " + w.title + " " + w.folderName + " " + w.pages);
        }
    }
    static ArrayList<Document> docsWithOddPages(Document[] arr) {
        ArrayList<Document> doc = new ArrayList<Document>();
        for(Document w : arr) {
            if(w.pages % 2 != 0) {
                doc.add(w);
            }
        }
        return doc;
    }
}

class Document
{
    int id, pages; 
    String title, folderName;
    Document(int id, int pg, String title, String fname) {
        this.id = id;
        this.pages = pg;
        this.folderName = fname;
        this.title = title;
    }
}

class Sortbyid implements Comparator<Document> { 
    public int compare(Document a, Document b) { 
        return a.id - b.id; 
    } 
} 