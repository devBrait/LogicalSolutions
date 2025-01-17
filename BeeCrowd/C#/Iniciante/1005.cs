using System; 

class URI {

    static void Main(string[] args) { 

        double A = double.Parse(Console.ReadLine());
        double B = double.Parse(Console.ReadLine());

        double weightA = 3.5;
        double weightB = 7.5;

        double media = (A * weightA + B * weightB) / 11;

        Console.WriteLine($"MEDIA = {media:F5}");

    }

}