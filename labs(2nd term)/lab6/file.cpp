#include"file.hpp"
void Delete(char*s1, int b, int c) {
    int i;
        for (i = 0; s1[i]; i++);
     
        if ((b < i) && (c < i)){
     
        cout << s1 << endl;
     
        int j = b -1;
     
        while (s1[j]){
        
     
            s1[j] = s1 [j + c];
            j++;
        
        }
        cout << s1;} else {
            
            cout << "There is no so many latters in this sentence!"<< endl;
        
            cout << "Please choose value less than " << i << endl;
        }
     
        
    }
