using System;

class Program
{
    static void Main()
    {
        int n, cont = 0;
        string sheldon, raj;

        n = int.Parse(Console.ReadLine());

        for (int i = 0; i < n; i++)
        {
            cont++;
            string[] inputs = Console.ReadLine().Split(' ');
            sheldon = inputs[0];
            raj = inputs[1];

            if (sheldon == raj)
                Console.WriteLine($"Caso #{cont}: De novo!");
            else if ((sheldon == "Spock" && raj == "pedra") ||
                     (sheldon == "lagarto" && raj == "Spock") ||
                     (sheldon == "tesoura" && raj == "lagarto") ||
                     (sheldon == "papel" && raj == "Spock") ||
                     (sheldon == "tesoura" && raj == "papel") ||
                     (sheldon == "papel" && raj == "pedra") ||
                     (sheldon == "lagarto" && raj == "papel") ||
                     (sheldon == "pedra" && raj == "lagarto") ||
                     (sheldon == "Spock" && raj == "tesoura") ||
                     (sheldon == "pedra" && raj == "tesoura"))
                Console.WriteLine($"Caso #{cont}: Bazinga!");
            else
                Console.WriteLine($"Caso #{cont}: Raj trapaceou!");
        }
    }
}