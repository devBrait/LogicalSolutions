using System; 

class URI {
    static void Main(string[] args) { 
        
        int segundos = int.Parse(Console.ReadLine());
        
        int horas = segundos / 3600;
        int minutos = (segundos % 3600) / 60;
        int segundosRestantes = segundos % 60;
        
        Console.WriteLine($"{horas}:{minutos}:{segundosRestantes}");
    }
}