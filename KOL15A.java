import java.io.*;
class KOL15A{
public static void main(String args[])throws IOException{
BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
int t = Integer.parseInt(br.readLine());
while(t!=0){
t--;
String y = br.readLine();
char a = ' ';
int sum = 0;
for(int i=0; i<y.length(); i++){
a = y.charAt(i);
if(Character.isDigit(a) == true)
sum = sum + Integer.parseInt(Character.toString(a));
}
System.out.println(sum);
}
}
}
