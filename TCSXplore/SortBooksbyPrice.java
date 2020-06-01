import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        ArrayList<Book> arr = new ArrayList<Book>();
        for(int i=0; i<4; i++) {
            int id = sc.nextInt();
            sc.nextLine();
            String title = sc.nextLine();
            String author = sc.nextLine();
            double price = sc.nextDouble();
            arr.add(new Book(id,title,author, price));
        }
        // sortBooksByPrice(arr);
        Collections.sort(arr, new Sortbyprice());

        for(Book s : arr) {
            System.out.println(s.id + " " + s.title + " " + s.author + " " + s.price);
        }
    }
    // static ArrayList<Book> sortBooksByPrice(ArrayList<Book> q) {

    // }
}

class Book
{
    int id;
    String author, title;
    double price;
    Book(int id, String title, String author, double price) {
        this.id = id;
        this.title = title;
        this.author = author;
        this.price = price;
    }
}

class Sortbyprice implements Comparator<Book> { 
    public int compare(Book a, Book b) { 
        return (int)(a.price - b.price); 
    } 
} 