using System;
using System.Linq;

class URI {

    static void Main(string[] args) { 

        string[] valores = Console.ReadLine().Split();
        int a = int.Parse(valores[0]);
        int b = int.Parse(valores[1]);
        int c = int.Parse(valores[2]);

        int[] valoresOrdenados = { a, b, c };
        Array.Sort(valoresOrdenados);

        foreach (int valor in valoresOrdenados)
        {
            Console.WriteLine(valor);
        }
        Console.WriteLine();

        Console.WriteLine(a);
        Console.WriteLine(b);
        Console.WriteLine(c);
    }
}
