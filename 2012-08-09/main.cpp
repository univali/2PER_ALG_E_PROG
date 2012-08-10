#include <iostream>
#include <stdio.h>

/**

    @date 2012-08-09

*/

using namespace std;

/**

    1) Faça um algoritmo que leia uma porcentagem e o preço de um produto.
    Se a porcentagem for menor que 25% acrescente o valor da porcentagem ao
    produto e exiba o valor final. Caso contrário, diminua a porcentagem do
    valor do produto e também exiba o valor final.

*/

void unus() {
    float preco = 0.0;
    float porcentagem = 0.0;
    float preco_novo;

    cout << "Informe um valor do produto: ";
    cin >> preco;
    cout << endl;

    cout << "Informe o porcentual desejado: ";
    cin >> porcentagem;
    cout << endl;


    char *tipo;
    if ( porcentagem < 25 ) {
        preco_novo = preco + ( preco * (porcentagem/100) );
        tipo = "mais";
    } else {
        preco_novo = preco - ( preco * (porcentagem/100) );
        tipo = "menos";
    }
    cout << "O produto que custava com " << preco << " com " << tipo << " " << porcentagem << " porcento custara " << preco_novo;
}

/**

    2) Um hotel cobra R$ 50,00 a diária, e mais uma taxa de serviço. A taxa de
    serviço é calculada da seguinte forma:

    R$ 4,00 por diária, se o número de diárias for maior que 10
    R$ 5,00 por diária, se o número de diárias for igual a 10.
    R$ 8,50 por diária, se o número de diárias for menor que 10.

    Elabore um algoritmo que solicite a quantidade de dias que o hóspede ficou
    no hotel (diárias), calcule e imprima o valor a ser pago por este mesmo
    cliente.

*/

int duo() {
    int diarias = 0;
    float taxa = 0.0;

    while ( diarias < 1 ) {

        diarias = 0;
        cout << "Informe o numero de diarias do hospede: ";
        cin >> diarias;
        cout << endl << endl;

        if  ( diarias > 0 && diarias < 999 ) {

            if ( diarias > 10 ) {
                taxa = 4;
            } else if ( diarias < 10 ) {
                taxa = 8.5;
            } else {
                taxa = 5;
            }

            cout << "Preco por diaria: 50 reais " << endl;
            cout << "Diarias: " << diarias << " " << endl;
            cout << "Subtotal: " << diarias*50 << endl << endl;

            cout << "Taxa de Servico: " << taxa << endl;
            cout << "Diarias: " << diarias  << endl;
            cout << "Subtotal: " << diarias*taxa << endl << endl;

            cout << "Total a pagar: " << (diarias*50 + diarias*taxa) << endl << endl << endl;

            diarias = 0;

        } else {
            cout << "Informe uma quantidade de diarias maior do que zero e menor que novecentos e noventa e nove." << endl << endl << endl;
            diarias = 0;
        }
    }
}

/**

    3) Desenvolva um algoritmo que calculo a conta de água. O custo
    da água varia de acordo com o tipo de  consumidor (residencial,
    comercial ou industrial). O cálculo obedece as seguintes regras:

    Residencial: R$ 5,00 de taxa mais R$0,05 por m3 gastos;

    Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 0,03
                por m3 gasto excedendo os 80 m3; e

    Industrial: R$800,00 para os primeiros 100 m3 gastos mais R$ 0,04
                por m3 gasto excedendo os 100 m3 excedendo os 100 m3

*/
void tres () {

    char tipo = ' ';
    int indice = 0;
    bool continuar = true;

    float consumo = 0.0;

    float taxa[3] = {5,500,800};
    float tarifa[3] = {0.05,0.03,0.04};
    float franquia[3] = {0,80,100};

    while ( continuar ) {
        while ( tipo != '1' && tipo != '2' && tipo != '3' ) {
            cout << "Escolha o tipo de consumidor: " << endl;
            cout << "Digite 1 para Residencial; " << endl;
            cout << "Digite 2 para Comercial; " << endl;
            cout << "Digite 3 para Industrial; " << endl << endl;
            cout << "Tipo: ";
            cin >> tipo;
            cout << endl;
        }

        switch(tipo) {
            case '1':
                indice = 0;
                break;
            case '2':
                indice = 1;
                break;
            case '3':
                indice = 2;
                break;
        }

        while ( consumo <= 0 || consumo >= 20000  ) {
            cout << "Informe o consumo: ";
            cin >> consumo;
        }

        cout << "Taxa: " << taxa[indice] << endl;
        cout << "Franquia: " << franquia[indice] << endl;
        cout << "Custo execentes: " << tarifa[indice] << endl << endl;

        if ( consumo > franquia[indice] ) {
            consumo = consumo - franquia[indice];
        } else {
            consumo = 0;
        }
        cout << "Total: " << taxa[indice] << " + " << "(" << tarifa[indice] << "*" << consumo << ") = " << taxa[indice] + (tarifa[indice]*consumo);
        cout << endl << endl;

        consumo = 0;
        tipo = ' ';
        indice = 0;

    }

}

/**

    4) Chico tem 1,50 metros e cresce 2 centimetros por ano, enquanto Zé
    tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo
    que calcule e imprima quantos anos serão necessários para que Zé seja
    maior que Chico.

*/
void quattuor() {

}

/**
*/

int main() {


    //unus();
    //duo();
    //tres();
    //quattuor();

    return 0;
}
