using System; 

class URI {

    static void Main(string[] args) { 

       string text = "LIFE IS NOT A PROBLEM TO BE SOLVED";
        
       int n = int.Parse(Console.ReadLine());
       
       for(int i = 0; i < n; i++)
       {
           Console.Write(text[i]);
       }
       
       Console.WriteLine();

    }

}