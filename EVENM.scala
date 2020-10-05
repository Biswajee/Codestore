import Array._

object Main {
    def main(args: Array[String]) : Unit = {
        var t : Int = scala.io.StdIn.readInt();
        while (t > 0) {
            val n  : Int = scala.io.StdIn.readInt();
            var v = ofDim[Int](n, n);

            var k : Int = 1;

            for (i <- 0 to n - 1) {
                if (i % 2 != 0) {
                    for (j <- n - 1 to 0 by - 1) {
                        v(i)(j) = k;
                        k = k + 1;
                    }
                } else {
                    for (j <- 0 to n - 1) {
                        v(i)(j) = k;
                        k = k + 1;
                    }
                }
            }
            for (i <- 0 to n - 1) {
                for (j <- 0 to n - 1) {
                    print(v(i)(j));
                    print(" ");
                }
                println();
            }
            t = t - 1;
        }
    }
}