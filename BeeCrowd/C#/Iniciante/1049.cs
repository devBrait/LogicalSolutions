using System;

class URI {

    static void Main(string[] args) { 
        
        string tipoInicial = Console.ReadLine();
        string tipoSecundario = Console.ReadLine();
        string tipoFinal = Console.ReadLine();
        
        if (tipoInicial == "vertebrado") {
            if (tipoSecundario == "ave") {
                Console.WriteLine(tipoFinal == "carnivoro" ? "aguia" : "pomba");
            } else {
                Console.WriteLine(tipoFinal == "onivoro" ? "homem" : "vaca");
            }
        } else {
            if (tipoSecundario == "inseto") {
                Console.WriteLine(tipoFinal == "hematofago" ? "pulga" : "lagarta");
            } else {
                Console.WriteLine(tipoFinal == "hematofago" ? "sanguessuga" : "minhoca");
            }
        }
    }
}
