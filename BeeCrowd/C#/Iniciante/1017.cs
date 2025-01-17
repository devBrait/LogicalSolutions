using System; 

class URI {

    static void Main(string[] args) { 

        int horas = int.Parse(Console.ReadLine());
        int velocidade = int.Parse(Console.ReadLine());
        
        double distancia = horas * velocidade;
        double quantidadeLitros = distancia / 12;

        Console.WriteLine($"{quantidadeLitros:F3}");
    }

}