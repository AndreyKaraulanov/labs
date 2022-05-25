#include "lab.hpp"
int countLine(Table tab) {

    FILE* data;
    size_t countLine = 0;

    if ((data = fopen("data.txt", "r")) == NULL)
        return 0;
    while (!feof(data)) {
        fscanf(data, "%s%s%d%f", tab.oboz, &tab.type, &tab.name, &tab.am);
        countLine++;
    }

    fclose(data);

    return countLine;

}



void input_backlist(Table tab) {

    FILE* data = fopen("data.txt", "a+");

    if (data == NULL) {
        puts("System ERROR");
        exit(0);
    }
    else {

        for (int i = 0; i < amount_of_elements; ++i) {

            cout << "Для " << i + 1 << " строки введите: обозначение , тип , номинал , количество: ";
            cin >> tab.oboz >> tab.type >> tab.name >> tab.am;
            fprintf(data, "%s\t%c\t%d\t%lg\n", tab.oboz, tab.type, tab.name, tab.am);
        }
    }
    
    fclose(data);
}



void input_forvardlist(Table tab) {


    FILE* data = fopen("data.txt", "r+");

    if (data == NULL) {
        puts("System ERROR");
        exit(0);
    }
    else {
        for (int i = 0; i < amount_of_elements; ++i) {
            cout << "Для " << i + 1 << " строки введите: обозначение , тип , номинал , количество: ";
            cin >> tab.oboz >> tab.type >> tab.name >> tab.am;
                fprintf(data, "%s\t%c\t%d\t%lg\n", tab.oboz, tab.type, tab.name, tab.am);
        }
    }

    fclose(data);
}

void random(Table tab) {

    FILE* data = fopen("data.txt", "a");

    int choose;
    cout << "Сколько строк вы хотите создать? ->  ";
    cin >> choose;


    char letters[] = { 'R', 'R' ,'C' };
    static char name_rand[3][20] = {"RT-11-24", "RT-11-24", "CGU-12K"};
    for (int i = 0; i < choose; i++) {

        tab.oboz = name_rand[rand() % 3];
        tab.type = letters[rand() % 3];
        tab.name = rand() + 1;
        tab.am = rand() + 10.0;

        fprintf(data, "%s%c%d%lg\n", tab.oboz, tab.type, tab.name, tab.am);
      
        
    }
    fclose(data);
}




void print(Table tab) {

    FILE* data = fopen("data.txt", "r");

    
    printf("-----------------------------------------------------------------\n");
    printf("|Ведомомсть комплектующих                                        |\n");
    printf("|----------------------------------------------------------------|\n");
    printf("|     Обозначение    |    Тип    |  Номинал         | Количество |\n");
    printf("|--------------------|-----------|------------------|------------|\n");
    for (int i = 0; i < amount_of_elements; i++) {
        fscanf(data, "%s%s%d%f", tab.oboz, &tab.type, &tab.name, &tab.am);
        printf("|%12s|   %c   |  %-9.1d | %14lg |\n",
               tab.oboz, tab.type, tab.name, tab.am);
        
    }
    printf("|----------------------------------------------------------------|\n");
    printf("| Примечание: R - резистор, C - конденсатор                      |\n");
    printf("------------------------------------------------------------------\n");
    cout << "\n\n\n\n";

    fclose(data);
}



void print_all(Table tab) {

    FILE* data = fopen("data.txt", "r");

    printf("-----------------------------------------------------------------\n");
    printf("|Ведомомсть комплектующих                                        |\n");
    printf("|----------------------------------------------------------------|\n");
    printf("|     Обозначение    |    Тип    |  Номинал         | Количество |\n");
    printf("|--------------------|-----------|------------------|------------|\n");
    
    for (size_t i = 0; i < countLine(tab)-1; i++) {
        fscanf(data, "%s%s%d%f", tab.oboz, &tab.type, &tab.name, &tab.am);
        printf("|%18s|   %c   |  %-10.1d | %9lg |\n",
               tab.oboz, tab.type, tab.name, tab.am);
    }
    
    printf("|----------------------------------------------------------------|\n");
    printf("| Примечание: R - резистор, C - конденсатор                      |\n");
    printf("------------------------------------------------------------------\n");
    cout << "\n\n\n\n";

    fclose(data);
}




void listNumberPrint(Table tab) {

    FILE* data = fopen("data.txt", "r");

    int choose;

    cout << "Какую информацию по номеру вы хотите увидеть?  ";
    cin >> choose;
    
    printf("-----------------------------------------------------------------\n");
    printf("|Ведомомсть комплектующих                                        |\n");
    printf("|----------------------------------------------------------------|\n");
    printf("|     Обозначение    |    Тип    |  Номинал         | Количество |\n");
    printf("|--------------------|-----------|------------------|------------|\n");
    
    for (size_t i = 0; i < choose; i++) {
        fscanf(data, "%s%s%d%f", tab.oboz, &tab.type, &tab.name, &tab.am);
    }
        
        printf("|%12s|   %c   |  %-9.1d | %14lg |\n",
               tab.oboz, tab.type, tab.name, tab.am);
    

    printf("|----------------------------------------------------------------|\n");
    printf("| Примечание: R - резистор, C - конденсатор                      |\n");
    printf("------------------------------------------------------------------\n");
    cout << "\n\n\n\n";

    fclose(data);
}
