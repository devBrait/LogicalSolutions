using System; 

class URI {
    static void Main(string[] args) { 

        int a, b, c, x, y;
        
        string[] input = Console.ReadLine()?.Split(' ');

        if (input == null || input.Length != 3 || 
            !int.TryParse(input[0], out a) || 
            !int.TryParse(input[1], out b) || 
            !int.TryParse(input[2], out c))
        {
            return;
        }

        x = b - a;
        y = c - b;

        if ((a > b && c >= b) || 
            (a < b && b < c && x < y) || 
            (a < b && b < c && x == y) || 
            (a > b && b > c && x < y) || 
            (a == b && b < c))
        {
            Console.WriteLine(":)");
        }
        else
        {
            Console.WriteLine(":(");
        }
    }

}