// Nome: Maurício Calil Manfrim Lucera
// Número USP: 11813306


/* 

    a) Verdadeiro, pois **matr = matr[0][0] (aponta para o primeiro elemento da primeira linha e da primeira coluna)
    
    b) Verdadeiro, pois *(*matr+1) equivale a matr[1][0]. Portanto,  *(*(matr+1)+2) equivale à matr[1][2]

    c) Verdadeiro, pois *matr[2] é equivalente a matr[2][0]. Somado a 3, seria matr[2][3]

    d) Verdadeiro, pois *(matr+2))[2] é o mesmo que matr[2][2], o que equivale ao terceiro elemento da terceira linha

    e) Falso, pos (*matr) retorna o endereço de memória de matr[0][0]. Se somado a 1, retornará o endereço de matr[0][1]
    
*/