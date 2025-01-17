import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);

        double n = 3.14159;
        double r  = s.nextDouble();
        double a = n * (r*r);

        System.out.printf("A=%.4f%n", a);
    }
}