#include "lab.hpp"
Antilops::Antilops() {
    name = "Ãíó";
    group = 'F';
    areal = "Àôðèêà";
    population = 0;
}
void random(Antilops antilop[]) {
    const char* names[3] = { "Äæåéðàí", "Ãíó", "Áåéçà" };
    char groups[3] = { 'F', 'F', 'F' };
    const char* areals[2] = {"Àçèÿ","Àôðèêà"};
    for (int i = 0; i < M; i++) {
        antilop[i].name = names[rand() % 3];
        antilop[i].group = groups[rand() % 3];
        antilop[i].areal = areals[rand() % 2];
        antilop[i].population = rand() % 1000 + 1000000;;
    }
}
void Antilops::print_tabl() {
    cout <<setw(4)<<"-----------------------------------------------\n";
    cout << setw(4) << "|             Íåêîòîðûå âèäû àíòèëîï          |\n";
    cout << setw(4) << "|---------------------------------------------|\n";
    cout << setw(4) << "|  Íàçâàíèå  | Ãðóïïà |   Àðåàë   |×èñëåííîñòü|\n";
    cout << setw(4) << "|---------------------------------------------|\n";
}
void print_obj(Antilops antilop[]) {

    for (int i = 0; i < M; i++) {
        cout << "|"<<setw(10) << antilop[i].name << setw(4);
        cout << "|" << setw(4) << antilop[i].group << setw(4);
        cout << "|" << setw(6) <<antilop[i].areal << setw(6);
        cout << "|" << setw(3) << antilop[i].population<<setw(6);
        cout<<"|\n";
        cout<< "|---------------------------------------------|"<<"\n";
    }
}
