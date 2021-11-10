#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    
    int arr_size;
    cout << "Сколько элементов вы хотите в вамшем массиве? ";
    cin >> arr_size;

    int *arr = new int[arr_size];
    cout << "Ваш массив: " << endl;

    // random created array
    for (int i = 0; i < arr_size; i++){
        arr[i] = rand()%10 + 1;
        cout << arr[i] << setw (4);
    }
    cout << endl;

    // to do
    string answer;
    string del_new ("del");
    string add_new ("add");

    cout << "Do you whant to delete element`s or add some new? <del/add> ";
    cin >> answer;

    int k; // num of elemnts that we add or del
    int i; // index of array
    int pos_rep; // position repeat of index

    // add k elements
    if (answer == add_new){
        // input
        cout << "How many elements do you whant to add? ";
        cin >> k;
        cout << "Choose the position where you whant to add " << k << " elements ";
        cin >> i;
        // add loop
        for (i==k; i < arr_size; i++){
        }
    }
    // del k elements
    else if (answer == del_new){
        // input
        cout << "How many elements do you whant to delete? ";
        cin >> k;
        cout << "Choose the position where you whant to delete " << k << " elements ";
        cin >> i;
        // delet loop
        for (pos_rep = 0; i < arr_size -1, pos_rep < k; i++, pos_rep++) {
            arr[i] = arr[i + k];
           
        }

         
        // new array
        cout << "Your new array:" << endl;
        for (i = 0; i < arr_size - 1; i++){
         cout << arr[i] << setw (4);
        
        }
        cout << endl;
    }


  


     


}
