using System; 

class URI {

    static void Main(string[] args) { 

        string[] valores = Console.ReadLine().Split(' ');
        
        int inicio = int.Parse(valores[0]);
        int fim = int.Parse(valores[1]);
        int tempo = 24;
        if(inicio < fim){
            int duracao = fim - inicio;
            Console.WriteLine($"O JOGO DUROU {duracao} HORA(S)");
        }else if(inicio > fim){
            int duracao = tempo - inicio + fim;
            Console.WriteLine($"O JOGO DUROU {duracao} HORA(S)");
        }else{
            Console.WriteLine("O JOGO DUROU 24 HORA(S)");
        }
    }

}