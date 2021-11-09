#include <iostream>
using namespace std;

int n;

void udalenie(int *x, int s)
{
    for(; s<n; s++)
        x[s] = x[s+1];
    n--;
    x = (int *)malloc(n*sizeof(int));
}

int main()
{
    int *x, i, s, po;
    cout<<"Razmer massiva: "; cin>>n;
    x = (int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
        {
            cout<<"X["<<i<<"]="; cin>>x[i];
        }
    cout<<"Ydalit' vse chisla massiva s: "; cin>>s; // вводишь индекс с какого
    cout<<"Ydalit' vse chisla massiva po: "; cin>>po; // вводишь индекс по какое
    for(; s<=po; s++)
        udalenie(x, s);
    cout<<"Massiv posle transformacii: ";
    for(i=0; i<n; i++)
        cout<<x[i]<<" ";
    cout<<endl;
    return 0;
}
