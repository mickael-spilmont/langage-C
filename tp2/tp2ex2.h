typedef struct {
    int den;
    int num;
} Rationnel;

Rationnel rationnel_produit(Rationnel n1, Rationnel n2);

Rationnel rationnel_somme(Rationnel n1, Rationnel n2);

Rationnel rationnel_plus_petit(Rationnel liste[]);