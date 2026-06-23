// um sudoku simples, nao gerativo (sudoku nao eh formado). certa liberdade de input e protecao contra usuario

#include <iostream>
#include <limits>
using namespace std;

int sudoku[9][9];

// ----- Verificar -----

bool verificarLinha(int x)
{
    int visitados[10] = {0};
    for (int a = 0; a < 9; a++)
    {
        int numero = sudoku[x][a];
        if (numero == 0)
            continue;
        if (visitados[numero] == 1)
            return false;
        visitados[numero] = 1;
    }
    return true;
}

bool verificarColuna(int y)
{
    int visitados[10] = {0};
    for (int a = 0; a < 9; a++)
    {
        int numero = sudoku[a][y];
        if (numero == 0)
            continue;
        if (visitados[numero] == 1)
            return false;
        visitados[numero] = 1;
    }
    return true;
}

bool verificarQuadrado(int x, int y)
{
    int inicioLinha = (x / 3) * 3;
    int inicioColuna = (y / 3) * 3;

    int visitados[10] = {0};
    for (int i = inicioLinha; i < inicioLinha + 3; i++)
    {
        for (int j = inicioColuna; j < inicioColuna + 3; j++)
        {
            int numero = sudoku[i][j];
            if (numero == 0)
                continue;
            if (visitados[numero] == 1)
                return false;
            visitados[numero] = 1;
        }
    }
    return true;
}

bool verificarVitoria()
{
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            if (sudoku[i][j] == 0)
                return false;

    for (int i = 0; i < 9; i++)
    {
        if (!verificarLinha(i))
            return false;
        if (!verificarColuna(i))
            return false;
        if (!verificarQuadrado((i / 3) * 3, (i % 3) * 3))
            return false;
    }

    return true;
}

// ----- Input Output -----

void lerTabuleiro()
{
    cout << "Digite o tabuleiro (9x9), linha por linha:" << endl;
    cout << "Qualquer valor fora de 1 a 9 sera tratado como espaco em branco." << endl;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            char c;
            cin >> c;
            if (c >= '1' && c <= '9')
                sudoku[i][j] = c - '0';
            else
                sudoku[i][j] = 0;
        }
    }
}

void imprimirTabuleiro()
{
    cout << endl;
    for (int i = 0; i < 9; i++)
    {
        if (i % 3 == 0 && i != 0)
            cout << "------+-------+------" << endl;

        for (int j = 0; j < 9; j++)
        {
            if (j % 3 == 0 && j != 0)
                cout << "| ";

            if (sudoku[i][j] == 0)
                cout << "_ ";
            else
                cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// ----- Jogada -----

void jogada()
{
    char cLinha, cColuna, cValor;

    cout << "Linha (1-9): ";
    cin >> cLinha;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpa o resto da linha
    cout << "Coluna (1-9): ";
    cin >> cColuna;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Valor (1-9): ";
    cin >> cValor;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (cLinha < '1' || cLinha > '9' ||
        cColuna < '1' || cColuna > '9' ||
        cValor < '1' || cValor > '9')
    {
        cout << "Entrada invalida." << endl;
        return;
    }

    int linha = cLinha - '1';
    int coluna = cColuna - '1';
    int valor = cValor - '0';

    if (sudoku[linha][coluna] != 0)
    {
        cout << "Essa celula ja esta preenchida." << endl;
        return;
    }

    sudoku[linha][coluna] = valor;

    if (!verificarLinha(linha) || !verificarColuna(coluna) || !verificarQuadrado(linha, coluna))
    {
        sudoku[linha][coluna] = 0;
        cout << "Jogada invalida! Numero conflita com a linha, coluna ou celula." << endl;
        return;
    }

    cout << "Jogada valida." << endl;
}

// ----- Loop Principal -----

void loopPrincipal()
{
    while (true)
    {
        imprimirTabuleiro();

        if (verificarVitoria())
        {
            cout << "Parabens, voce ganhou!" << endl;
            break;
        }

        jogada();
    }
}

// ----- Verificacao -----

int main()
{
    do
    {
        // Zera o tabuleiro para nova partida
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                sudoku[i][j] = 0;

        lerTabuleiro();
        loopPrincipal();

        cout << "Gostaria de jogar novamente? (s/n): ";
        char resposta;
        cin >> resposta;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (resposta != 's' && resposta != 'S' &&
            resposta != 'y' && resposta != 'Y' &&
            resposta != '1')

        {
            cout << "Jogo encerrado!" << endl;
            break;
        }

    } while (true);

    cout << "Obrigado por jogar!" << endl;

    return 0;
}
