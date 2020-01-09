import java.util._
import scala.util.control.Breaks._

object Main {
  def main(args: Array[String]): Unit = {
    val sc: Scanner = new Scanner(System.in);
    val t: Int = sc.nextInt();
    for (i <- 0 until t) {
      var rose: Int = 0;
      val s: Int = sc.nextInt();
      val u: Int = sc.nextInt();
      val v: Int = sc.nextInt();
      val w: Int = sc.nextInt();
      var love: Int = u + v + w;
      breakable {
          while (love > 0) { 
              if ((u + v) > s && (v + w) > s) {
                rose = 3;
                break;
              }
              else {
                love = love - s;
                rose = rose+1;
              }
          }
      }
      println(rose);
    }
  }

}
