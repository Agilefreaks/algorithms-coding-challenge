import org.junit.Test;

import java.util.Vector;

public class Problem2_UnitTest {

    @Test
    public void exampleTestCase1() {
        Vector<Character> testList = new Vector<>();
        testList.add('a');
        testList.add('b');
        testList.add('c');
        testList.add('d');
        testList.add('f');
        Problem2.checkMissingLetter(testList);
    }

    @Test
    public void exampleTestCase2() {
        Vector<Character> testList = new Vector<>();
        testList.add('O');
        testList.add('Q');
        testList.add('R');
        testList.add('S');
        Problem2.checkMissingLetter(testList);
    }

    @Test
    public void exampleTestCase3() {
        Vector<Character> testList = new Vector<>();
        testList.add('A');
        testList.add('B');
        testList.add('C');
        testList.add('D');
        Problem2.checkMissingLetter(testList);
    }
}
