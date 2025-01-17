using System; 

class URI {

    static void Main(string[] args) { 

        string[] valores = Console.ReadLine().Split(' ');
        double[] lados = Array.ConvertAll(valores, double.Parse);
        
        Array.Sort(lados);
        Array.Reverse(lados);
        double A = lados[0];
        double B = lados[1];
        double C = lados[2];

        if (A >= B + C)
            Console.WriteLine("NAO FORMA TRIANGULO");
        else {
            if (A * A == B * B + C * C)
                Console.WriteLine("TRIANGULO RETANGULO");
             if (A * A > B * B + C * C)
                Console.WriteLine("TRIANGULO OBTUSANGULO");
             if (A * A < B * B + C * C)
                Console.WriteLine("TRIANGULO ACUTANGULO");
             if (A == B && B == C)
                Console.WriteLine("TRIANGULO EQUILATERO");
             if ((A == B && B != C) || (A == C && C != B) || (B == C && C != A))
                Console.WriteLine("TRIANGULO ISOSCELES");
        }

    }

}