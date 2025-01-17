using System;

class URI {
    static void Main(string[] args) { 
        string inputDias = Console.ReadLine();
        int.TryParse(inputDias, out int idadeTotal);

        double idadeAnos = idadeTotal / 365;

        int diasRestantesAnos = idadeTotal % 365;
        double idadeMeses = diasRestantesAnos / 30;

        int idadeDias = diasRestantesAnos % 30;

        Console.WriteLine($"{(int)idadeAnos} ano(s)");
        Console.WriteLine($"{(int)idadeMeses} mes(es)");
        Console.WriteLine($"{idadeDias} dia(s)");
    }
}