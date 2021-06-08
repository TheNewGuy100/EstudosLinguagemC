#define PILHA_H
#define TAMANHO 10   // DEFINE O TAMANHO DA PILHA

    // DEFININDO A STACK
   typedef struct stack {
       int topo;
       int item[TAMANHO];
   }pilha;

    // INICIA PILHA
    void initPilha(struct stack * ps) {
        ps -> topo = -1;
    }
    
    // FUNÇÃO QUE VERIFICA SE A PILHA ESTÁ CHEIA
    int pilhaCheia(struct stack * ps) {
        if (ps -> topo == TAMANHO - 1) {
            return 1;
        } else {
            return 0;
        }
    }

    // FUNÇÃO QUE EMPILHA
    int push(struct stack * ps, int x) {
        if (pilhaCheia(ps)) {
            printf ("A pilha esta cheia");
        } else {
            return (ps->item[ ++ (ps -> topo)] = x);
        }
    }


    //  FUNÇÃO PARA VERIFICAR SE A PILHA ESTÁ VAZIA
    int pilhaVazia(struct stack * ps) {
        if (ps -> topo == -1) {
            printf("Nao ha elementos na pilha");
        } else {
            return 0;
        }
    }

    // FUNÇÃO QUE VERIFICA O NUMERO ATUAL DO TOPO
    int topo(struct stack * ps) {
        if (pilhaVazia(ps)) {
            return 1;
        } else {
            return (ps -> item[ ps -> topo]);
        }
    }

    // FUNÇÃO QUE DESEMPILHA
    int pop (struct stack * ps) {
        if (pilhaVazia(ps)) { 
            printf("A pilha esta vazia");
        } else {
            return (ps -> item [ ps -> topo -- ]);
        }
    }