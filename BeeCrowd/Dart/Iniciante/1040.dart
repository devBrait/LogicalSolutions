import 'dart:io';

void main() {
  List<String> notasInput = stdin.readLineSync()!.split(' ');
  double n1 = double.parse(notasInput[0]);
  double n2 = double.parse(notasInput[1]);
  double n3 = double.parse(notasInput[2]);
  double n4 = double.parse(notasInput[3]);

  double media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;

  print('Media: ${media.toStringAsFixed(1)}');

  if (media >= 7.0) {
    print('Aluno aprovado.');
  } else if (media < 5.0) {
    print('Aluno reprovado.');
  } else {
    print('Aluno em exame.');

    double notaExame = double.parse(stdin.readLineSync()!);
    print('Nota do exame: ${notaExame.toStringAsFixed(1)}');

    media = (media + notaExame) / 2.0;

    if (media >= 5.0) {
      print('Aluno aprovado.');
    } else {
      print('Aluno reprovado.');
    }

    print('Media final: ${media.toStringAsFixed(1)}');
  }
}
