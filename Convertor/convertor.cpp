#include<iostream>
#include<windows.h>
#include <stdlib.h>
using namespace std;

void banner(int x)
{
    char mat[13][60];
    int i,j;

    for(i=0;i<13;i++)
        for(j=0;j<60;j++)
            mat[i][j]=32;
    for(i=0;i<13;i++)
        mat[i][0]=mat[i][59]=-70;
    for(i=0;i<60;i++)
        mat[0][i]=mat[12][i]=-51;

    mat[0][0]=-55;
    mat[0][59]=-69;
    mat[12][0]=-56;
    mat[12][59]=-68;

    for(i=3;i<57;i++)
        for(j=3;j<10;j++)
            mat[j][i]=-80;

    mat[3][8]=mat[3][14]=mat[3][17]=mat[3][18]=mat[3][21]=mat[3][24]=mat[3][25]=mat[3][28]=mat[3][33]=mat[3][39]=mat[3][45]=mat[3][51]=32;

    mat[4][8]=mat[4][14]=mat[4][17]=mat[4][18]=mat[4][21]=mat[4][24]=mat[4][25]=mat[4][28]=mat[4][33]=mat[4][39]=mat[4][45]=mat[4][51]=32;

    mat[5][5]=mat[5][6]=mat[5][7]=mat[5][8]=mat[5][11]=mat[5][14]=mat[5][18]=mat[5][21]=mat[5][24]=mat[5][25]=mat[5][28]=mat[5][31]=32;
    mat[5][32]=mat[5][33]=mat[5][36]=mat[5][39]=mat[5][40]=mat[5][41]=mat[5][43]=mat[5][44]=mat[5][45]=mat[5][48]=mat[5][51]=mat[5][54]=32;

    mat[6][5]=mat[6][6]=mat[6][7]=mat[6][8]=mat[6][11]=mat[6][14]=mat[6][21]=mat[6][24]=mat[6][25]=mat[6][28]=32;
    mat[6][32]=mat[6][33]=mat[6][39]=mat[6][40]=mat[6][41]=mat[6][43]=mat[6][44]=mat[6][45]=mat[6][48]=mat[6][51]=32;

    mat[7][5]=mat[7][6]=mat[7][7]=mat[7][8]=mat[7][11]=mat[7][14]=mat[7][17]=mat[7][21]=mat[7][22]=mat[7][27]=mat[7][28]=mat[7][31]=mat[7][32]=32;
    mat[7][33]=mat[7][36]=mat[7][38]=mat[7][39]=mat[7][40]=mat[7][41]=mat[7][43]=mat[7][44]=mat[7][45]=mat[7][48]=mat[7][51]=mat[7][54]=mat[7][56]=32;

    mat[8][8]=mat[8][14]=mat[8][17]=mat[8][18]=mat[8][21]=mat[8][22]=mat[8][27]=mat[8][28]=32;
    mat[8][33]=mat[8][36]=mat[8][39]=mat[8][40]=mat[8][41]=mat[8][43]=mat[8][44]=mat[8][45]=mat[8][51]=mat[8][54]=32;

    mat[9][8]=mat[9][14]=mat[9][17]=mat[9][18]=mat[9][21]=mat[9][22]=mat[9][23]=mat[9][26]=mat[9][27]=mat[9][28]=32;
    mat[9][33]=mat[9][36]=mat[9][39]=mat[9][40]=mat[9][41]=mat[9][43]=mat[9][44]=mat[9][45]=mat[9][51]=mat[9][54]=32;


    for(i=0;i<13;i++)
    {
        for(j=0;j<60;j++)
            cout<<mat[i][j];
        cout<<endl;
    }
}

void gotoxy(int x,int y)
{
    COORD p={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}

void menu(int x)
{
    int i, unit=0;
    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Alegeti tipul de conversie din lista de mai jos:       "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"           1. Arie           8.  Procentaj                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"           2. Denistate      9.  Putere                   "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"           3. Energie        10. Temperatura              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"           4. Forta          11. Timp                     "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"           5. Lungime        12. Valuta                   "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"           6. Masa           13. Viteza                   "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"           7. Presiune       14. Volum                    "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti tipul de conversie:                        "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);
    gotoxy(39, 25);
    cin>>unit;

}

int main()
{
    int x;
    banner(x);
    menu(x);
    system("cls");
}
