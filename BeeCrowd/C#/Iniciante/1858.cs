using System; 

class URI {

    static void Main(string[] args) { 

        int n = int.Parse(Console.ReadLine());
        string[] values = Console.ReadLine().Split(' ');

        int indice = 1;
        int menor = int.Parse(values[0]);

        for (int i = 0; i < n; i++)
        {
            int atual = int.Parse(values[i]);
        
            if (menor > atual)
            {
                menor = atual;
                indice = i + 1;
            }
        }
        
        Console.WriteLine(indice);
    }
}