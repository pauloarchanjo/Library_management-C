#include<stdio.h>

int main()

{

    printf("-----------LIVRARIA----------\n\n");

    printf("1. Adicionar Livros\n");
    printf("2. Apresentar as informações do livro\n");
    printf("3. Pesquisar Livros\n");
    printf("4. SAIR\n\n");

    int a1;

    printf("Digite: ");
    scanf("%d", &a1);
    printf("\n\n");

    if(a1==1)
    {

        printf("Você pode adicionar informações aos livros\n\n");

        printf("Escolha entre as três categorias : \n\n");

        printf("1. Computação\n");
        printf("2. Eletrônica\n");
        printf("3. Mecânica\n\n");

        int a2;

        printf("Escolha a categoria : ");

        scanf("%d", &a2);

        printf("\n\n");

        if(a2==1)
        {

            printf("Você escolheu a categoria da 'Computação'\n\n");

            printf("1. Introdução a linguagem C\n");
            printf("2. Introdução a Python\n");
            printf("3. Introdução a JavaScript\n\n");

            int a3;

            printf("Escolha um livro: ");
            scanf("%d", &a3);

            printf("\n\n");

            if(a3==1)
            {
                printf("Você escolheu 'Introdução a linguagem C'\n\n");

                char book_namea[50];
                char author_namea[50];

                int pagea;
                int pricea;

                printf("Nome do livro: ");
                scanf("%s", &book_namea);
                printf("\n\n");

                printf("Autor: ");
                scanf("%s", &author_namea);
                printf("\n\n");

                printf("Páginas: ");
                scanf("%d", &pagea);
                printf("\n\n");

                printf("Preço: ");
                scanf("%d", &pricea);
                printf("\n\n");
            }
            else if(a3==2)
            {
                printf("Você escolheu 'Introdução a Python'\n\n");

                char book_nameb[50];
                char author_nameb[50];

                int pageb;
                int priceb;

                printf("Nome do livro: ");
                scanf("%s", &book_nameb);
                printf("\n\n");

                printf("Autor: ");
                scanf("%s", &author_nameb);
                printf("\n\n");

                printf("Páginas: ");
                scanf("%d", &pageb);
                printf("\n\n");

                printf("Preço: ");
                scanf("%d", &priceb);
                printf("\n\n");
            }
            else if(a3==3)
            {
                printf("Você escolheu 'Introdução a JavaScript'\n\n");

                char book_namec[50];
                char author_namec[50];

                int pagec;
                int pricec;

                printf("Nome do livro: ");
                scanf("%s", &book_namec);
                printf("\n\n");

                printf("Autor: ");
                scanf("%s", &author_namec);
                printf("\n\n");

                printf("Páginas: ");
                scanf("%d", &pagec);
                printf("\n\n");

                printf("Preço: ");
                scanf("%d", &pricec);
                printf("\n\n");
            }

        }
        else if(a2==2)
        {

            printf("Você escolheu a categoria 'Eletrônica'\n\n");

            printf("1. Eletrônica Prática para Inventores\n");
            printf("2. A arte da Eletrônica\n");
            printf("3. FUNDAMENTOS DE CIRCUITOS DIGITAIS\n\n");

            int a4;

            printf("Escolha um livro: ");
            scanf("%d", &a4);
            printf("\n\n");

        if(a4==1)
        {

            printf("Você escolheu 'Eletrônica Prática para Inventores'\n\n");

            char book_named[50];
            char author_named[50];

            int paged;
            int priced;

            printf("Nome do livro: ");
            scanf("%s", &book_named);
            printf("\n\n");

            printf("Autor: ");
            scanf("%s", &author_named);
            printf("\n\n");

            printf("Páginas: ");
            scanf("%d", &paged);
            printf("\n\n");

            printf("Preço: ");
            scanf("%d", &priced);
            printf("\n\n");

        }
        else if(a4==2)
        {
            printf("Você escolheu 'A arte da Eletrônica'\n\n");

            char book_namee[50];
            char author_namee[50];

            int pagee;
            int pricee;

            printf("Nome do Livro: ");
            scanf("%s", &book_namee);
            printf("\n\n");

            printf("Autor: ");
            scanf("%s", &author_namee);
            printf("\n\n");

            printf("Páginas: ");
            scanf("%d", &pagee);
            printf("\n\n");

            printf("Preço: ");
            scanf("%d", &pricee);
            printf("\n\n");
        }
        else if(a4==3)
        {
            printf("Você escolheu 'FUNDAMENTOS DE CIRCUITOS DIGITAIS'\n\n");

            char book_namef[50];
            char author_namef[50];

            int pagef;
            int pricef;

            printf("Nome do livro: ");
            scanf("%s", &book_namef);
            printf("\n\n");

            printf("Autor: ");
            scanf("%s", &author_namef);
            printf("\n\n");

            printf("Páginas: ");
            scanf("%d", &pagef);
            printf("\n\n");

            printf("Preço: ");
            scanf("%d", &pricef);
            printf("\n\n");
        }
    }
    else if(a2==3)
    {

        printf("Você escolheu a categoria 'Mecânica'\n\n");

        printf("1. Introdução ao AutoCad\n");
        printf("2. Fundamentos da Termodinâmica\n");
        printf("3. Engenharia Mecânica : Tipo Convencional e Objetivo\n\n");

        int a5;

        printf("Escolha um livro: ");
        scanf("%d", &a5);
        printf("\n\n");

        if(a5==1)
        {
            printf("Você escolheu 'Introdução ao AutoCad'\n\n");

            char book_nameg[50];
            char author_nameg[50];

            int pageg;
            int priceg;

            printf("Nome do livro: ");
            scanf("%s", &book_nameg);
            printf("\n\n");

            printf("Autor: ");
            scanf("%s", &author_nameg);
            printf("\n\n");

            printf("Páginas: ");
            scanf("%d", &pageg);
            printf("\n\n");

            printf("Preço: ");
            scanf("%d", &priceg);
            printf("\n\n");
        }
        else if(a5==2)
        {
            printf("Você escolheu 'Fundamentos da Termodinâmica'\n\n");

            char book_nameh[50];
            char author_nameh[50];

            int pageh;
            int priceh;

            printf("Nome do livro: ");
            scanf("%s", &book_nameh);
            printf("\n\n");

            printf("Autor: ");
            scanf("%s", &author_nameh);
            printf("\n\n");

            printf("Páginas: ");
            scanf("%d", &pageh);
            printf("\n\n");

            printf("Preço: ");
            scanf("%d", &priceh);
            printf("\n\n");
        }
        else if(a5==3)
        {

            printf("Você escolheu 'Engenharia Mecânica : Tipo Convencional e Objetivo'\n\n");

            char book_namei[50];
            char author_namei[50];

            int pagei;
            int pricei;

            printf("Nome do livro: ");
            scanf("%s", &book_namei);
            printf("\n\n");

            printf("Autor: ");
            scanf("%s", &author_namei);
            printf("\n\n");

            printf("Páginas: ");
            scanf("%d", &pagei);
            printf("\n\n");

            printf("Preço: ");
            scanf("%d", &pricei);
            printf("\n\n");
        }
    }
}
else if(a1==3)
{

    printf("Nessa sessão, você pode pesquisar os livros presentes na livraria\n\n");

    printf("Digite o código:123 para 'Introdução a linguagem C'\n");

    printf("Digite o código:456 para 'Introdução a Python'\n");

    printf("Digite o código:789 para 'Introdução a JavaScript'\n");

    printf("Digite o código:523 para 'Eletrônica Prática para Inventores'\n");

    printf("Digite o código:759 para 'A arte da Eletrônica'\n");

    printf("Digite o código:157 para 'FUNDAMENTOS DE CIRCUITOS DIGITAIS'\n");

    printf("Digite o código:359 para 'Introdução ao AutoCad'\n");

    printf("Digite o código:153 para 'Fundamentos da Termodinâmica'\n");

    printf("Digite o código:104 para 'Engenharia Mecânica : Tipo Convencional e Objetivo'\n\n");

    int a6;

    printf("Digite o código do livro: ");

    scanf("%d", &a6);

    printf("/n");

    switch(a6)
    {
        case 123:
        printf("Nome do livro : Introdução a linguagem C\n\n");
        printf("Status : 2 Copias restantes");
        break;

        case 456:
        printf("Nome do livro : Introdução a Python\n\n");
        printf("Status : 10 Copias restantes");
        break;

        case 789:
        printf("Nome do livro : Introdução a JavaScript\n\n");
        printf("Status : 1 Copia restante");
        break;

        case 523:
        printf("Nome do livro : Eletrônica Prática para Inventores\n\n");
        printf("Status : 20 Copias restantes");
        break;

        case 759:
        printf("Nome do livro : A arte da Eletrônica\n\n");
        printf("Status : 30 Copias restantes");
        break;

        case 157:
        printf("Nome do livro : FUNDAMENTOS DE CIRCUITOS DIGITAIS\n\n");
        printf("Status : 18 Copias restantes");
        break;

        case 359:
        printf("Nome do livro : Introdução ao AutoCad\n\n");
        printf("Status : Indisponível");
        break;

        case 153:
        printf("Nome do livro : Fundamentos da Termodinâmica\n\n");
        printf("Status : 5 Copias restantes");
        break;

        case 104:
        printf("Nome do livro : Engenharia Mecânica : Tipo Convencional e Objetivo\n\n");
        printf("Status : 4 Copias restantes");
        break;
    }
}
else if(a1==4)
{
    printf("O Sistema de Livraria foi fechado\n\n");
}

}