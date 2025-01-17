using System; 

class URI {

    static void Main(string[] args) { 

        int valor = int.Parse(Console.ReadLine());
        int[] todasNotas = {100, 50, 20, 10, 5, 2 , 1};
        int quantidadeNotas = 0;
        if(valor > 0 && valor < 1000000){
            Console.WriteLine($"{valor}");
            foreach(int notas in todasNotas){
                quantidadeNotas = valor/notas;
                Console.WriteLine($"{quantidadeNotas} nota(s) de R$ {notas},00");
                valor %= notas;
            }
        }else{
            Console.WriteLine("O número deve ser maior que 0 e menor que 1000000");
        }
    }

}