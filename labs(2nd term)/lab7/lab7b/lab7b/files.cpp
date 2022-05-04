#include "files.hpp"
void File_work1(int* mas1) {
    
    FILE* f1;
    f1 = fopen( "f1.txt", "wb");
    
    
    for (int i = 0;i < m;i++) {
        fwrite(mas1, sizeof(*mas1), m, f1);
            
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
    
    f1 = fopen( "f1.txt", "wb");
    
    
    fwrite(mas1, sizeof(*mas1), m, f1);
    
    fclose(f1);
    f1 = fopen( "f1.txt", "rb");
        
        
            
    for (int i = 0; i < m;i++) {
        fread(&*(mas2 + i), sizeof(int), m, f1);
        cout << *(mas2 + i) << "\t";
            
    }
    fclose(f1);
}
void File_work3(int* mas2, int *sum) {
    
    FILE* f1;
    f1 = fopen("f1.txt", "wb");
    
    fwrite(mas2, sizeof(*mas2), m, f1);
    
    fclose(f1);
    f1 = fopen("f1.txt", "wb");
    
    //int k = 0;
    for (int i = 0; i < m;i++) {
        fread(&*(mas2 + i), sizeof(int), m, f1);
        if (*(mas2+i) % 2 == 0) {
            *sum += *(mas2+i);
    }
        
        
        
    }
    cout << endl;
    cout << "Сумма чётных:" << endl;
    cout << *sum << endl;
    fclose(f1);
}
