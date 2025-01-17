using System;

class URI {

    static void Main(string[] args) { 
        string[] valor1 = Console.ReadLine().Split();
        int produto1 = int.Parse(valor1[0]);
        int unidadeProduto1 = int.Parse(valor1[1]);
        double precoProduto1 = double.Parse(valor1[2]);

        string[] valor2 = Console.ReadLine().Split();
        int produto2 = int.Parse(valor2[0]);
        int unidadeProduto2 = int.Parse(valor2[1]);
        double precoProduto2 = double.Parse(valor2[2]);

        double valorTotal = (unidadeProduto1 * precoProduto1) + (unidadeProduto2 * precoProduto2);

        Console.WriteLine($"VALOR A PAGAR: R$ {valorTotal:F2}");
    }
}
