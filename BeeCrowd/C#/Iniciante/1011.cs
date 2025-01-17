using System; 

class URI {

    static void Main(string[] args) { 
       double valorRaio = double.Parse(Console.ReadLine());
       double pi = 3.14159;
       double resultadoFinal = (4/3.0) * pi * Math.Pow(valorRaio, 3);
       
       Console.WriteLine($"VOLUME = {resultadoFinal:F3}");
    }

}