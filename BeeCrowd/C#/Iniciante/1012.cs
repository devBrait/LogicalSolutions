using System; 

class URI {
    static void Main(string[] args) { 
        string input = Console.ReadLine();
        string[] inputValores = input.Split(' ');
        
        double.TryParse(inputValores[0], out double A);
        double.TryParse(inputValores[1], out double B);
        double.TryParse(inputValores[2], out double C);
        double pi = 3.14159;
        
        double areaTriangulo = (A * C)/2;
        double areaCirculo = C*C*pi;
        double areaTrapezio = (A+B)*C/2;
        double areaQuadrado = B*B;
        double areaRetangulo = A*B;
        Console.WriteLine($"TRIANGULO: {areaTriangulo:F3}");
        Console.WriteLine($"CIRCULO: {areaCirculo:F3}");
        Console.WriteLine($"TRAPEZIO: {areaTrapezio:F3}");
        Console.WriteLine($"QUADRADO: {areaQuadrado:F3}");
        Console.WriteLine($"RETANGULO: {areaRetangulo:F3}");
    }
}