using System; 

class URI {
    static void Main(string[] args) { 
        double valor = double.Parse(Console.ReadLine()) + 0.001;

        int[] notas = { 100, 50, 20, 10, 5, 2 };
        double[] moedas = { 1, 0.5, 0.25, 0.1, 0.05, 0.01 };

        Console.WriteLine("NOTAS:");

        foreach (int nota in notas) {
            int quantidadeNotas = (int)(valor / nota);
            Console.WriteLine($"{quantidadeNotas} nota(s) de R$ {nota}.00");
            valor %= nota;
        }

        Console.WriteLine("MOEDAS:");
        foreach (double moeda in moedas) {
            int quantidadeMoedas = (int)(valor / moeda);
            Console.WriteLine($"{quantidadeMoedas} moeda(s) de R$ {moeda:F2}");
            valor %= moeda;
        }
    }
}