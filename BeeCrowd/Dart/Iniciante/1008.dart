import 'dart:io';

void main() {

    String? valorID = stdin.readLineSync();
    String? valorSAL = stdin.readLineSync();
    String? valorSAL2 = stdin.readLineSync();
    
    if (valorID != null && valorSAL != null && valorSAL2 != null) {
      double salario = double.parse(valorSAL);
      double horasTrabalhadas = double.parse(valorSAL2);
      double salarioFinal = salario * horasTrabalhadas;
      print('NUMBER = $valorID');
      print('SALARY = U\$ ${salarioFinal.toStringAsFixed(2)}');
    } else {
      print('Erro: Certifique-se de fornecer valores válidos.');
    }
}
