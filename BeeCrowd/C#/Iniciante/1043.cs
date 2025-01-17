using System; 

class URI {

    static void Main(string[] args) { 

        string [] valores = Console.ReadLine().Split(' ');
        float a = float.Parse(valores[0]);
        float b = float.Parse(valores[1]);
        float c = float.Parse(valores[2]);
        
        if(a + b > c && a + c > b && b + c > a){
            float valor = a + b + c;
            Console.WriteLine($"Perimetro = {valor:F1}");
        }else{
            float valorArea = c/2 * (a+b);
            Console.WriteLine($"Area = {valorArea:F1}");
        }

    }

}