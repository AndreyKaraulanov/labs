#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int GetSizeFile (){
    setlocale (LC_ALL,"rus");
    int i=0;
    string Rus,Eng;
    ifstream getEng ("Eng.txt");
    ifstream getRus ("Rus.txt");
    if (getEng. is_open () && getRus. is_open ())
    {
        while (! getEng. eof () &&! getRus. eof ())
        {
            getEng>>Eng;
            getRus>>Rus;
            i++;
            //return Eng;
            //return Rus;
}
}
    else
        return 0;
    return i;
}
int main ()
{
    
    int sizeFile=GetSizeFile ();
    if (sizeFile==0){
        cout<<"Словарь пуст!!!";
        exit (0);
    }
    string * Eng=new string [sizeFile];
    string * Rus=new string [sizeFile];
    
    int lang;
    cout<<"Английский->Русский - 1\nРусский->Английский - 2\n";
    cin>>lang;
    
    //string t_Rus,t_Eng;
    ifstream getEng ("Eng.txt");
    ifstream getRus ("Rus.txt");
    int i=0;
    if (getEng. is_open () && getRus. is_open ()){
        while (! getEng. eof () &&! getRus. eof ())
        {
            //getline(string, streamsize, Eng);
            getEng>>Eng [i];
            getRus>>Rus [i];
            i++;
            //cout<<Eng[i];
        }
        
    }
    else{
        cout<<"Read file error";
        exit (0);
    }
    string Text;
    ofstream putTrans ("Trans.txt");
    if (! putTrans. is_open ()){
        cout<<"Ошибка записи файла";
        exit (0);
    }
    ifstream getText("Text.txt");
    ifstream getTextEng("TextEng.txt");
    //string a = " ";
    //if (lang==2)
        //getText. open ("Text.txt");
    //else getText. open ("TextEng.txt");
    ifstream input("Rus.txt");
    ifstream input2("Eng.txt");
    //getline(getEng, Eng, ' ');
  
    if (getText. is_open ()&&getTextEng. is_open ()){
        int flag;
        int i = 0;
        while (! getText. eof () &&! getTextEng. eof() && i<sizeFile)
        {
            getText>>Text;
            flag=0;
            //input2 >> Eng[i];
            //input>>Rus[i];
            //for (int i=0; i<sizeFile; i++)
            //{
            //getline(getEng, Eng);
            //getEng>>Eng [i];
            //getRus>>Rus [i];
            //getline(getEng, Eng, ' ');
            
                if (lang==1)
                {
                    //getline(cin, Text);
                   
                    //cin >> * Eng;
                    //getEng.get(Eng[i]);
                    cin>>Text;
                    //getText>>Text;
                    //input2 >> Eng[i];
                    //input>>Rus[i];
                    if (Text==Eng [i])
                    {
                        //cin >> * Eng;
                        
                        //cin.Eng();
                        /*for(string line; getline(input, line);){
                            
                        }*/
                        
                        cout<<Rus [i] <<" ";
                        putTrans<<Rus [i] <<" ";
                        flag=1;
                    }
                }
                if(lang == 2)
                {
                    cin>>Text;
                    if (Text==Rus [i])
                    {
                        //cin >> * Rus;
                        //getEng>>t_Eng;
                        //Eng [i] =t_Eng;
                        cout<<Eng [i] <<" ";
                        putTrans<<Eng [i] <<" ";
                        flag=1;
                    }
                }
            //}
            if (flag==0)
            {
                cout<<" ("<<Text<<")";
                putTrans<<" ("<<Text<<")";
            }
            i++;
        }
        getEng. close ();
        getRus. close ();
        getText. close ();
        putTrans. close ();
    }
    else
    {
        cout<<"Ошибка чтения файла";
        exit (0);
    }
    return 0;
    }
