using System; 

class URI {
    static void Main(string[] args) { 
        string[] cod_Produtos = Console.ReadLine().Split(' ');
        
        int codProduto1 = int.Parse(cod_Produtos[0]);
        double quantidadeProduto = double.Parse(cod_Produtos[1]);
        
        double totalProduto1 = 0;
        
        switch(codProduto1){
            case 1:
                totalProduto1 = 4.00;
               break;
            case 2:
                 totalProduto1 = 4.50;     
                break;
            case 3:
                totalProduto1 = 5.00;
               break;
            case 4:
                 totalProduto1 = 2.00;     
                break;
            default:
                 totalProduto1 = 1.50;
                 break;
        }
        double totalFinal = totalProduto1 * quantidadeProduto;
        Console.WriteLine($"Total: R$ {totalFinal:F2}");
    }
}