import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);

        int cod_1 = s.nextInt();
        int quantidade_1 = s.nextInt();
        double preco_1 = s.nextDouble();

        int cod_2 = s.nextInt();
        int quantidade_2 = s.nextInt();
        double preco_2 = s.nextDouble();

        double total = (quantidade_1 * preco_1) + (quantidade_2 * preco_2);

        System.out.printf("VALOR A PAGAR: R$ %.2f%n", total);
    }
}
