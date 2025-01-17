using System;

class Program
{
    static void Main()
    {

        string input = Console.ReadLine();

        string[] inputValues = input.Split(' ');

        if (inputValues.Length != 3)
        {
            Console.WriteLine("Input inválido.");
            return;
        }

        if (!int.TryParse(inputValues[0], out int a) ||
            !int.TryParse(inputValues[1], out int b) ||
            !int.TryParse(inputValues[2], out int c))
        {
            Console.WriteLine("Input inválido.");
            return;
        }

        int greatest = GetGreatest(a, b, c);

        Console.WriteLine($"{greatest} eh o maior");
    }

    static int GetGreatest(int x, int y, int z)
    {
        return Math.Max(Math.Max(x, y), z);
    }
}
