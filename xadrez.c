#include  <stdio.h>

// Desafio Xadrez Nivel Novato

int main() {
    int opcaomenu; //Variável para armazenar a opção do menu
    printf("Desafio de Xadrez\n");
    printf("Este é um desafio de xadrez em C!\n");
    
    printf("Qual peça deseja mover?\n"); // Solicita ao usuário a peça que deseja mover
    printf("0. Nenhuma, Sair\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    scanf("%d", &opcaomenu);
    switch (opcaomenu) // Inicia o switch para verificar a opção escolhida pelo usuário
    {
    case 0: // Caso o usuário escolha 0, encerra o programa
        printf("Você escolheu não mover nenhuma peça. Até logo!\n");
        return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
        break;
    case 1: // Caso o usuário escolha a Torre solicita a direção e a quantidade de casas que deseja mover
        printf("Você escolheu mover a Torre.\n");
        printf("A Torre se move em linha reta, horizontal ou verticalmente.\n");
        printf("Você pode mover a Torre para qualquer número de casas em linha reta.\n");
        printf("Em qual direção deseja mover a Torre?\n");
        printf("0. Nenhuma, Sair\n");
        printf("1. Para Cima\n");
        printf("2. Para Baixo\n");
        printf("3. Para a Esquerda\n");
        printf("4. Para a Direita\n");
        int direcaotorre;
        scanf("%d", &direcaotorre);
        int casastorre;
        printf("Quantas casas deseja mover a Torre?\n");
        scanf("%d", &casastorre);
        if (casastorre > 5){
            printf("Você não pode mover a Torre mais de 5 casas. Por favor, escolha um número válido.\n");
            break; // Se o usuário tentar mover a Torre mais de 5 casas, exibe uma mensagem e encerra o programa
        }
        if (direcaotorre == 0) { // Se o usuário escolher 0, não moverá a Torre
            printf("Você escolheu não mover a Torre. Até logo!\n");
        } else {
            switch (direcaotorre) { // Recebe a direção escolhida pelo usuário e a repete pela quantidade de casas escolhida.
                case 1: 
                    do {
                        printf("Você moveu a Torre para Cima.\n");
                    } while (casastorre-- > 1);
                    break;

                case 2:
                    do {
                        printf("Você moveu a Torre para Baixo.\n");
                    } while (casastorre-- > 1);
                    break;
                case 3:
                    do {
                        printf("Você moveu a Torre para Esquerda.\n");
                    } while (casastorre-- > 1);
                    break;
                case 4:
                    do {
                        printf("Você moveu a Torre para Direita.\n");
                    } while (casastorre-- > 1);
                    break;
                default: printf("Você escolheu uma direção inválida.\n"); break;
            }
        }
        break;
    case 2: // Caso o usuário escolha o Bispo solicita a direção e a quantidade de casas que deseja mover
        printf("Você escolheu mover o Bispo.\n");
        printf("O Bispo se move em diagonal, qualquer número de casas.\n");
        printf("Em qual direção deseja mover o Bispo?\n");
        printf("0. Nenhuma, Sair\n");
        printf("1. Diagonal Superior Esquerda\n");
        printf("2. Diagonal Superior Direita\n");
        printf("3. Diagonal Inferior Esquerda\n");
        printf("4. Diagonal Inferior Direita\n");
        int direcaoBispo;
        scanf("%d", &direcaoBispo);
        printf("Quantas casas deseja mover o Bispo?\n");
        int casasBispo;
        if (casasBispo > 5){
            printf("Você não pode mover o Bispo mais de 5 casas. Por favor, escolha um número válido.\n");
            break; // Se o usuário tentar mover o Bispo mais de 5 casas, exibe uma mensagem e encerra o programa
        }
        scanf("%d", &casasBispo);
            if (direcaoBispo == 0) {
                printf("Você escolheu não mover o Bispo. Até logo!\n");
            } else {
                switch (direcaoBispo) { // Recebe a direção escolhida pelo usuário e a repete pela quantidade de casas escolhida.
                    case 1: 
                        do {
                            printf("Você moveu o Bispo uma vez para cima e uma vez para a Esquerda.\n");
                        } while (casasBispo-- > 1);
                        break;
                    case 2:
                        do {
                            printf("Você moveu o Bispo uma vez para cima e uma vez para a Direita.\n");
                        } while (casasBispo-- > 1);
                        break;
                    case 3:
                        do {
                            printf("Você moveu o Bispo uma vez para baixo e uma vez para a Esquerda.\n");
                        } while (casasBispo-- > 1);
                        break;
                    case 4:
                        do {
                            printf("Você moveu o Bispo uma vez para baixo e uma vez para a Direita.\n");
                        } while (casasBispo-- > 1);
                        break;
                    default: printf("Você escolheu uma direção inválida.\n"); break;
                }
            }
        break;
    case 3: // Caso o usuário escolha a Rainha solicita a direção e a quantidade de casas que deseja mover
        printf("Você escolheu mover a Rainha.\n");
        printf("A Rainha se move em linha reta, horizontal, vertical ou diagonalmente.\n");
        printf("Você pode mover a Rainha para qualquer número de casas em linha reta ou diagonalmente.\n");
        printf("Em qual direção deseja mover a Rainha?\n");
        printf("0. Nenhuma, Sair\n");
        printf("1. Para Cima\n");
        printf("2. Para Baixo\n");
        printf("3. Para a Esquerda\n");
        printf("4. Para a Direita\n");
        printf("5. Diagonal Superior Esquerda\n");
        printf("6. Diagonal Superior Direita\n");
        printf("7. Diagonal Inferior Esquerda\n");
        printf("8. Diagonal Inferior Direita\n");
        int direcaoRainha;
        scanf("%d", &direcaoRainha);
        printf("Quantas casas deseja mover a Rainha?\n");
        int casasRainha;
        scanf("%d", &casasRainha);
        if (casasRainha > 8){
            printf("Você não pode mover a Rainha mais de 8 casas. Por favor, escolha um número válido.\n");
            break; // Se o usuário tentar mover a Rainha mais de 8 casas, exibe uma mensagem e encerra o programa
        }
            if (direcaoRainha == 0) {
                printf("Você escolheu não mover a Rainha. Até logo!\n");
            } else {
                switch (direcaoRainha) { // Recebe a direção escolhida pelo usuário e a repete pela quantidade de casas escolhida.
                    case 1: 
                        do {
                            printf("Você moveu a Rainha para Cima.\n");
                        } while (casasRainha-- > 1);
                        break;
                    case 2:
                        do {
                            printf("Você moveu a Rainha para Baixo.\n");
                        } while (casasRainha-- > 1);
                        break;
                    case 3:
                        do {
                            printf("Você moveu a Rainha para Esquerda.\n");
                        } while (casasRainha-- > 1);
                        break;
                    case 4:
                        do {
                            printf("Você moveu a Rainha para Direita.\n");
                        } while (casasRainha-- > 1);
                        break;
                    case 5:
                        do {
                            printf("Você moveu a Rainha uma vez para cima e uma vez para a Esquerda.\n");
                        } while (casasRainha-- > 1);
                        break;
                    case 6:
                        do {
                            printf("Você moveu a Rainha uma vez para cima e uma vez para a Direita.\n");
                        } while (casasRainha-- > 1);
                        break;
                    case 7:
                        do {
                            printf("Você moveu a Rainha uma vez para baixo e uma vez para a Esquerda.\n");
                        } while (casasRainha-- > 1);
                        break;
                    case 8:
                        do {
                            printf("Você moveu a Rainha uma vez para baixo e uma vez para a Direita.\n");
                        } while (casasRainha-- > 1);
                        break;
                    default: printf("Você escolheu uma direção inválida.\n"); break;
                }
    case 4: // Caso o usuário escolha o Cavalo solicita a direção e a quantidade de casas que deseja mover
        printf("Você escolheu mover o Cavalo.\n");
        printf("O Cavalo se move em forma de L, duas casas em uma direção e uma casa em outra.\n");
        printf("Em qual direção deseja mover o Cavalo?\n");
        printf("0. Nenhuma, Sair\n");
        printf("1. Duas casas para Cima e uma para a Esquerda\n");
        printf("2. Duas casas para Cima e uma para a Direita\n");
        printf("3. Duas casas para Baixo e uma para a Esquerda\n");
        printf("4. Duas casas para Baixo e uma para a Direita\n");
        printf("5. Uma casa para Cima e duas para a Esquerda\n");
        printf("6. Uma casa para Cima e duas para a Direita\n");
        printf("7. Uma casa para Baixo e duas para a Esquerda\n");
        printf("8. Uma casa para Baixo e duas para a Direita\n");
        int direcaoCavalo;
        int mov = 1; // Variável para controlar a movimentação do Cavalo
        scanf("%d", &direcaoCavalo);
            if (direcaoCavalo == 0) {
                printf("Você escolheu não mover o Cavalo. Até logo!\n");
            } else {
                switch (direcaoCavalo) { // Recebe a direção escolhida pelo usuário e exibe a movimentação do Cavalo.
                    case 1:  //Duas casas para Cima e uma para a Esquerda
                        for (int i = 1; i < 2; i++) { // Controla as duas casas em uma direção
                            int mov = 1;
                            while (mov <= 2) { // Controla a casa adicional em outra direção
                                printf("Movendo o Cavalo para a Cima.\n");
                                mov++;
                            }
                            printf("Movendo o Cavalo para Esquerda.\n");
                        }
                    break;
                    case 2: //Duas casas para Cima e uma para a Direita
                        for (int i = 1; i < 2; i++) { // Controla as duas casas em uma direção
                            int mov = 1;
                            while (mov <= 2) { // Controla a casa adicional em outra direção
                                printf("Movendo o Cavalo para a Cima.\n");
                                mov++;
                            }
                            printf("Movendo o Cavalo para Direita.\n");
                        }
                        break;
                    case 3: //Duas casas para Baixo e uma para a Esquerda
                        for (int i = 1; i < 2; i++) { // Controla as duas casas em uma direção
                            int mov = 1;
                            while (mov <= 2) { // Controla a casa adicional em outra direção
                                printf("Movendo o Cavalo para Baixo.\n");
                                mov++;
                            }
                            printf("Movendo o Cavalo para Esquerda.\n");
                        }
                    break;
                    case 4: //Duas casas para Baixo e uma para a Direita
                        for (int i = 1; i < 2; i++) { // Controla as duas casas em uma direção
                            int mov = 1;
                            while (mov <= 2) { // Controla a casa adicional em outra direção
                                printf("Movendo o Cavalo para a Baixo.\n");
                                mov++;
                            }
                            printf("Movendo o Cavalo para Direita.\n");
                        }
                        break;
                    case 5: //Uma casa para Cima e duas para a Esquerda
                        for (int i = 1; i < 2; i++) { // Controla as duas casas em uma direção
                            printf("Movendo o Cavalo para Cima.\n");
                            int mov = 1;
                            while (mov <= 2) { // Controla a casa adicional em outra direção
                                printf("Movendo o Cavalo para Esquerda.\n");
                                mov++;
                            }
                        }
                        break;
                    case 6: //Uma casa para Cima e duas para a Direita
                        for (int i = 1; i < 2; i++) { // Controla as duas casas em uma direção
                            printf("Movendo o Cavalo para Cima.\n");
                            int mov = 1;
                            while (mov <= 2) { // Controla a casa adicional em outra direção
                                printf("Movendo o Cavalo para a Direita.\n");
                                mov++;
                            }
                        }
                        break;
                    case 7: //Uma casa para Baixo e duas para a Esquerda
                        for (int i = 1; i < 2; i++) { // Controla as duas casas em uma direção
                            printf("Movendo o Cavalo para Baixo.\n");
                            int mov = 1;
                            while (mov <= 2) { // Controla a casa adicional em outra direção
                                printf("Movendo o Cavalo para a Esquerda.\n");
                                mov++;
                            }
                        }
                        break;
                    case 8: //Uma casa para Baixo e duas para a Direita
                        for (int i = 1; i < 2; i++) { // Controla as duas casas em uma direção
                            printf("Movendo o Cavalo para Baixo.\n");
                            int mov = 1;
                            while (mov <= 2) { // Controla a casa adicional em outra direção
                                printf("Movendo o Cavalo para a Direita.\n");
                                mov++;
                            }
                        }
                        break;
                    default:
                        printf("Você escolheu uma direção inválida.\n");
                        break;
                }
                }
            }
        break;
    default:
        printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        break;
    }
}
