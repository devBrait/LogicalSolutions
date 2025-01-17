using System; 

class URI {
    static void Main(string[] args) { 

        double valor = double.Parse(Console.ReadLine());
        double pi = 3.14159;
        double area = pi * valor * valor;
        Console.WriteLine($"A={area:F4}");
        
    }
}