using System;

class Program
{
    static void Main()
    {
        string[] valores = Console.ReadLine().Split(' ');

        double A = double.Parse(valores[0]);
        double B = double.Parse(valores[1]);
        double C = double.Parse(valores[2]);

        double delta = Math.Pow(B, 2) - 4 * A * C;

        if (A == 0 || delta < 0)
        {
            Console.WriteLine("Impossivel calcular");
        }
        else
        {
            double R1 = (-B + Math.Sqrt(delta)) / (2 * A);
            double R2 = (-B - Math.Sqrt(delta)) / (2 * A);

            Console.WriteLine($"R1 = {R1:F5}");
            Console.WriteLine($"R2 = {R2:F5}");
        }
    }
}
