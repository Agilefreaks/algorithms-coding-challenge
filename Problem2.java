import java.util.Vector;

public class Problem2 {

    public static void checkMissingLetter(Vector<Character> serie) {
        for (int i = 0; i < serie.size() - 1; i++) {
            if (serie.get(i + 1) - serie.get(i) > 1) {
                System.out.println(serie + " -> " + (char) (serie.get(i) + 1));
                return;
            }
        }
        System.out.println("The serie is ok!");
    }

}
