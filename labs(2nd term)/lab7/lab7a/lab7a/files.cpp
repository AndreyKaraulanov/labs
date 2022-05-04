#include "files.hpp"
void File_work1(int*mas1) {
    
    FILE* f1;
    f1 = fopen("f1.txt", "w");
    
   
        
    for (int i = 0;i < m;i++) {
        fprintf(f1, "%2d",* (mas1+i));
        fprintf(f1,"\t");
    }

    cout << "Массив 1:" << endl;
    for (int i = 0; i < m; i++) {
        cout << *(mas1 + i) << "\t";
        }
    fclose(f1);
    
}
void File_work2(int* mas1, int* mas2) {
    
    cout << endl;
    cout << "Массив 2:" << endl;
    FILE* f1;
    FILE* f2;
    f1 = fopen("f1.txt", "r");
    f2 = fopen("f2.txt", "w");
    
    
    for (int i = 0; i < m;i++) {
            
        fscanf(f1, "%2d", &*(mas2 + i));
        fprintf(f2, "%2d", *(mas2 + i));
        fprintf(f2, "\t");
    }
            
    rewind(f1);
    for (int i = 0; i < m;i++) {
        fscanf(f1, "%2d", &*(mas2 + i));
        cout << *(mas2 + i) << "\t";
    }
    
    fclose(f1);
    fclose(f2);
}
void File_work3(int*mas1,int* mas2) {
    
    cout << endl;
    FILE* f2;
    int x;
    cout << "Переписаные данные из файла f2 в переменную x:" << endl;
    f2 = fopen("f2.txt", "r");
   
    fprintf(f2, "\n");
    for (int i = 0; i < m; i++) {
        fscanf(f2, "%d", &x);
        fprintf(f2, "%d", x);
        cout << x <<"\t";
    }
    
    fclose(f2);
}
