#include <iostream>

using namespace std;

int a[100]; // Tablica elementow


void scalanie (int najmniejsza, int posrednia, int najwieksza)
{
int x,y,z,b[100];
int pomocnicza;
x=najmniejsza;
y=najmniejsza;
z=posrednia+1;

while((x<=posrednia)&&(z<=najwieksza)
{
    if(a[x]<= a[z]){
        b[y]=a[x];
        x++;}
    else
    {
        b[y]=a[z];
        z++;
    }
    z++;
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



int main()
{

}
