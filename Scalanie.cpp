#include <iostream>

using namespace std;

int a[100]; // Tablica elementow


void scalanie(int najmniejsza, int posrednia, int najwieksza)       // Funkcja potrzebna do przydzielenia odpowiednich pol do liczb i zamieniania kolejnosci w tablicy
{
int b[100];
int x,y,z,pomocnicza;
x=najmniejsza;      // Zmienne pomocnicze
y=najmniejsza;
z=posrednia+1;      //

while((x<=posrednia)&&(z<=najwieksza))      //Warunek siê spe³ni jedynie gdy najmniejsza wartosc bedzie mniejsza od posredniej  a posrednia od najwiekszej
{
    if(a[x]<= a[z]){                        // Przepisanie wartosci najmniejszej do tablicy typu b.
        b[y]=a[x];
        x++;}                               // Zwiekszanie wartosci najmniejszej x.
    else
    {
        b[y]=a[z];                          // Przepisanie wartosci posredniej do tablicy typu b.
        z++;
    }
    y++;                                    // zwiekszanie wartosci najmniejszej.
}
if(x>posrednia){
    for(pomocnicza=z;pomocnicza<=najwieksza;pomocnicza++){ // Dla zmiennej pomocniczej posredniej zwiekszanie jej wartosc do poki nie bedzie ona rowna najwiekszej.
        b[y]=a[pomocnicza];                 // Przypisanie wartosci pomocniczej do tablicy b.
        y++;}                               // zwiekszanie wartosci najmniejszej
    }
else{
    for(pomocnicza=x;pomocnicza<=posrednia;pomocnicza++){ // Dla zmiennej najmniejszej przepisanie jej wartosci do pomocniczej i zwikeszanie jej wartosc do posredniej
        b[y]=a[pomocnicza];                 // Przepisanie wartosci pomocniczej do tablicy b.
        y++;
    }
    for(pomocnicza=najmniejsza;pomocnicza<=najwieksza;pomocnicza++) // Ostatni przypadek gdy pomocnicza jest rowna najmniejszej to nalezy zwiekszyc az do najwiekszej.
        a[pomocnicza]=b[pomocnicza];                // Przepisanie pomocniczej z tabeli b do tabeli a.
}
}

void sortuj_scalanie(int najmniejsza, int najwieksza){ // sortowanie tablicy
int posrednia; //zmienna pomocnicza jak u gory.
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
