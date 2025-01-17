using System;

class URI {

    static void Main(string[] args) { 

        string[] valores = Console.ReadLine().Split(' ');
        
        int inicioHora = int.Parse(valores[0]);
        int inicioMinuto = int.Parse(valores[1]);
        int fimHora = int.Parse(valores[2]);
        int fimMinuto = int.Parse(valores[3]);
        
        int inicioTempoMinutos = inicioHora * 60 + inicioMinuto;
        int fimTempoMinutos = fimHora * 60 + fimMinuto;
        
        int duracaoMinutos;

        if (fimTempoMinutos <= inicioTempoMinutos) {
            fimTempoMinutos += 24 * 60;
        }
        duracaoMinutos = fimTempoMinutos - inicioTempoMinutos;

        int duracaoHoras = duracaoMinutos / 60;
        int duracaoMin = duracaoMinutos % 60;

        Console.WriteLine($"O JOGO DUROU {duracaoHoras} HORA(S) E {duracaoMin} MINUTO(S)");

    }

}
