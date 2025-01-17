using System; 

class URI {

    static void Main(string[] args) { 

        string[] valores = Console.ReadLine().Split(' ');
        
        int valorA = int.Parse(valores[0]);
        int valorB = int.Parse(valores[1]);
        
        if(valorA % valorB == 0 || valorB % valorA == 0){
            Console.WriteLine("Sao Multiplos");
        }else{
            Console.WriteLine("Nao sao Multiplos");
        }

    }

}