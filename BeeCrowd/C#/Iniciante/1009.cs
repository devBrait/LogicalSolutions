using System; 

class URI {

    static void Main(string[] args) { 

        string nome = Console.ReadLine();
        double salario = double.Parse(Console.ReadLine());
        double valorVendido = double.Parse(Console.ReadLine());
        
        double bonus = valorVendido * 0.15;
        
        double salarioFinal = salario + bonus;
        
        Console.WriteLine($"TOTAL = R$ {salarioFinal:F2}");

    }

}