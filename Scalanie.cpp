#include <iostream>

using namespace std;

int a[100]; // Tablica elementow


void scalanie(int najmniejsza, int posrednia, int najwieksza)
{
int b[100];
int x,y,z,pomocnicza;
x=najmniejsza;
y=najmniejsza;
z=posrednia+1;

while((x<=posrednia)&&(z<=najwieksza))
{
    if(a[x]<= a[z]){
        b[y]=a[x];
        x++;}
    else
    {
        b[y]=a[z];
        z++;
    }
    y++;
}
if(x>posrednia){
    for(pomocnicza=z;pomocnicza<=najwieksza;pomocnicza++){
        b[y]=a[pomocnicza];
        y++;}
    }
else{
    for(pomocnicza=x;pomocnicza<=posrednia;pomocnicza++){
        b[y]=a[pomocnicza];
        y++;
    }
    for(pomocnicza=najmniejsza;pomocnicza<=najwieksza;pomocnicza++)
        a[pomocnicza]=b[pomocnicza];
}
}

void sortuj_scalanie(int najmniejsza, int najwieksza){
int posrednia;
if(najmniejsza<najwieksza)
    {
    posrednia=(najmniejsza+najwieksza)/2;
    sortuj_scalanie(najmniejsza,posrednia);
    sortuj_scalanie(posrednia+1,najwieksza);
    scalanie(najmniejsza,posrednia,najwieksza);
    }

}


int main()
{
    int ilosc;
    cout<<" ----------------------------------------------------"<<endl;
    cout<<"              SORTOWANIE PRZEZ SCALANIE              "<<endl;
    cout<<"-----------------------------------------------------"<<endl;

    cout<<"Prosze wprowadzic ilosc liczb ktore nalezy posortowac"<<endl;
    cout<<"Nastepnie wcisnac ENTER"<<endl;
    cin>>ilosc;
    cout<<endl;
    cout<<"Prosze wprowadzic wartosci liczb ktore nalezy posortowac"<<endl;
    for(int i=1;i<=ilosc;i++)
        cin>>a[i];
    sortuj_scalanie(1,ilosc);
    cout<<endl;
    cout<<"Sortowana tablica wedlug metody scalanie rowna sie : "<<endl;
    cout<<endl<<endl;

    for(int k=1;k<=ilosc;k++)
        cout<<a[k]<<"   ";

    cout<<endl;
}
