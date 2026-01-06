private class function {
    public int age = 10;
    int roll = 23;
}

public class calculator {
    public static void main(String[] args) {
        function ob = new function();
        System.out.println(ob.age);
        System.out.println(ob.roll);
    }
}