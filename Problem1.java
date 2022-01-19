import java.util.Vector;

public class Problem1 {
    public static long sum(Vector<Integer> array) {
        long sum = 0;
        for (long currentElement : array) {
            if (currentElement % 2 == 0)
                sum += currentElement;
        }
        return sum;
    }
}
