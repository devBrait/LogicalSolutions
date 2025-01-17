using System; 

class URI {
    static void Main(string[] args) { 
        double km = double.Parse(Console.ReadLine());
        double litros = double.Parse(Console.ReadLine());
        
        double valorTotal = km / litros;
        
        Console.WriteLine($"{valorTotal:F3} km/l");
    }
}