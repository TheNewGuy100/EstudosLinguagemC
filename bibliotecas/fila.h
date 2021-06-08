
// DEFINIÇÃO DA STRUCT
typedef struct {
    int ini, fim;
    int vet[MAX];
} fila;

// INICIA A FILA
void initFila(fila * q) {
    q -> ini = q -> fim = 0;
}

//INCREMENTADOR
int incr(int i) {
    if (i == MAX) {
        return 0;
    } else {
        return i+1;
    }
}

// INSERE ALGO NA FILA
int insere(fila * q, int v) {
    if (incr(q -> fim) == q -> ini) {
        printf("Capacidade da fila estourou!");
        return 0;
    }
    q -> vet[q -> fim] = v;
    q -> fim = incr(q -> fim);
}

// MOSTRA ITENS NA FILA
void display (fila * q) {
    int i;
    
    printf ("Display: ");
    for (i=q -> ini; i != q -> fim; i=incr(i)) {
        printf ("%d ", q -> vet[i]);
    }
}

//  REMOVE ALGO DA FILA
int remove(fila * q) {
    int v;
    if (q -> fim == q -> ini) {
        printf("fila vazia\n");
        return 0;
    }
    v = q -> vet[q -> ini];
    q -> ini = incr(q -> ini);
    return v;
}
