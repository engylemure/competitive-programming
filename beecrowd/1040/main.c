#include <stdio.h>

double Average(double N1, double N2, double N3, double N4){
    return (N1*2 + N2*3 + N3*4 + N4)/10;
}

int main(){
    double N1, N2, N3, N4, exam, average;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    average = Average(N1, N2, N3, N4);
    printf("Media: %.1lf\n",average);

    if(average >= 7){
        printf("Aluno aprovado.\n");
    } else if(average >= 5){
        printf("Aluno em exame.\n");
        scanf("%lf", &exam);
        printf("Nota do exame: %.1lf\n",exam);
        average = (average+exam)/2;
        if(average>=5)printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",average);
    } else printf("Aluno reprovado.\n");

    return 0;

}