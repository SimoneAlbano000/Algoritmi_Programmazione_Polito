// Istruzioni di controllo del flusso di dati

/* if: ------------------------------

if (condizione vera) {
    codice
} else if (condizione vera) {
    codice
} else {
    codice
}

*/// --------------------------------

/* switch - case: -------------------
// Le espressioni costanti da valutare possono essere solo numeri o caratteri, non stringhe.

switch ( espressione da valutare) {
    case ( const_1 ):
        codice
        break;
    case ( const_2 ):
        codice
        break;
    .
    .
    .
    default: (in tutti gli altri casi)
        codice default;
}

*/// --------------------------------

// cicli:

/* ciclo while / do-while: ----------

while ( condizone vera ) { <--
    codice;                  |
}                      -------

do {                                <--
    codice eseguito almeno una volta; |
} while ( condizione vera );     ------

*/// --------------------------------

/* ciclo for: -----------------------

for (int i = 0; i < n; i++) {  <--
    codice;                      |
}                           ------

*/// --------------------------------


// Istruzioni break; e continue; sono utilizzate 
// rispettivamente per interrompere un ciclo indipendentemente
// dalle iterazioni gia' fatte, e per terminare l'iterazione corrente
// e saltare all'iterazione successiva del ciclo.