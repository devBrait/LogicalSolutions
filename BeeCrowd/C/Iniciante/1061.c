#include <stdio.h>

int main() {

	int Dia1, Dia2, DiaResultado = 0, HoraResultado = 0, MinutoResultado = 0, diferencaSEC = 0;
    int hora1, min1, sec1, hora2, min2, sec2;
    char day1[10], day2[10], string1[20], string2[20];

    fgets(day1, 10, stdin);
    sscanf(day1,"Dia %i", &Dia1);
    getchar();

    fgets(string1, 20, stdin);
    sscanf(string1,"%i : %i : %i",  &hora1, &min1, &sec1);

    fgets(day2, 10, stdin);
    sscanf(day2,"Dia %i", &Dia2);
    getchar();

    fgets(string2, 20, stdin);
    sscanf(string2,"%i : %i : %i",  &hora2, &min2, &sec2);


    diferencaSEC = ((hora2*60*60) + (min2*60) + sec2) - ((hora1*60*60) + (min1*60) + sec1);


    if(diferencaSEC >= 0){

        while(diferencaSEC >= (3600)){
            if(HoraResultado < 24){
                HoraResultado++;
                diferencaSEC -= 3600;
            }
            else{
                HoraResultado = 0;
            }
        }

        while(diferencaSEC >= 60){
            if(MinutoResultado < 60){
                 diferencaSEC -= 60;
                 MinutoResultado++;
            }
            else{
                MinutoResultado = 0;
            }
        }

        DiaResultado = Dia2 - Dia1;
    }
    else{
        diferencaSEC = 24*60*60 + diferencaSEC;

        while(diferencaSEC >= (3600)){
            if(HoraResultado < 24){
                HoraResultado++;
                diferencaSEC -= 3600;
            }
            else{
                HoraResultado = 0;
            }
        }

        while(diferencaSEC >= 60){
            if(MinutoResultado < 60){
                 diferencaSEC -= 60;
                 MinutoResultado++;
            }
            else{
                MinutoResultado = 0;
            }
        }

        DiaResultado = (Dia2 - Dia1) - 1;
    }


    printf("%i dia(s)\n%i hora(s)\n%i minuto(s)\n%i segundo(s)\n", DiaResultado, HoraResultado, MinutoResultado, diferencaSEC);

    return 0;
}