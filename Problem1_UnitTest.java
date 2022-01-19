import org.junit.Assert;
import org.junit.Test;

import java.util.Vector;

public class Problem1_UnitTest {
    private static final Integer MAXINT = 2147483647;

    @Test
    public void exampleTestCase() {
        Vector<Integer> list = new Vector<>();
        list.add(1);
        list.add(2);
        list.add(1);
        list.add(4);
        list.add(1);
        list.add(6);
        long result = Problem1.sum(list);
        Assert.assertEquals(12, result);
    }

    @Test
    public void testMaxBoundaryCheck() {
        Vector<Integer> testVector = new Vector<>();
        testVector.add(MAXINT);
        testVector.add(2);
        long result = Problem1.sum(testVector);
        Assert.assertEquals(2, result);
    }

    @Test
    public void testMinBoundaryCheck() {
        Vector<Integer> testVector = new Vector<>();
        testVector.add(-MAXINT);
        testVector.add(2);
        long result = Problem1.sum(testVector);
        Assert.assertEquals(2, result);
    }

    @Test
    public void testOverflowMaxValue() {
        Vector<Integer> testVector = new Vector<>();
        testVector.add(MAXINT - 1);
        testVector.add(MAXINT - 1);
        long result = Problem1.sum(testVector);
        Assert.assertEquals((2L * (MAXINT - 1)), result);
    }

    @Test
    public void testOverflowMinValue() {
        Vector<Integer> testVector = new Vector<>();
        testVector.add(-(MAXINT - 1));
        testVector.add(-(MAXINT - 1));
        long result = Problem1.sum(testVector);
        Assert.assertEquals(-(2L * (MAXINT - 1)), result);
    }
}
