#include <studio.h>
int main () {
    int velocidade;
    int distancia;
    printf("Digite a velocidade");
    scanf("%d",&velocidade);
    printf("digite a distanvia km: ");
    scanf("%d",&distancia);
    int tempo = velocidade / distancia ;
    printf("O tempo em horas é : %d" ,tempo);
    return 0 ;
    
}
    
    
