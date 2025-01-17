using System;

class URI {

    static void Main(string[] args) { 

        int[] valores = new int[6];
        int cont = 0;
        for (int i = 0; i < 6; i++) {
            Console.Write("");
            if (int.TryParse(Console.ReadLine(), out valores[i]) && valores[i] > 0) {
                cont++;
            }
        }
        Console.WriteLine($"{cont} valores positivos");
    }
}
