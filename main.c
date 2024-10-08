#include <stdio.h>
int main() {
    int n_prodotti;
    int i=1;
    float costo_finale=0;
    float costo;

    printf("Quanti prodotti hai acquistato?: ");
    scanf("%d", &n_prodotti);

    while ( i<= n_prodotti) {
        printf("Inserisci il costo del prodotto: ");
        scanf("%f", &costo);
        costo_finale+=costo;
        i++;

    }
printf("Il totale speso e': %.2f", costo_finale);
    return 0;
}
