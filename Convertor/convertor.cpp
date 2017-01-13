#include<iostream>
#include<windows.h>
#include <stdlib.h>
#include<iomanip>
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

void menu(int &x)
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
    gotoxy(36, 25);

    cin>>x;
}

void revenire(int &x)
{
   int i, unit=0;
    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"      Pentru conversie noua: [1]                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"      Pentru a reveni la meniul principal: [2]            "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"      Pentru a iesi din program: [3]                      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"      Optiune:                                            "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);

    gotoxy(16,30);
    cin>>x;
    system("cls");

}

long double arie(int &x)
{
    int i,y,z;
    long double cant;

    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Alegeti unitatile de masura din lista de mai jos:      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"      1. Milimetri patrati     7.  Kilometri patrati      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"      2. Centimetri patrati    8.  Acre                   "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"      3. Decimetri patrati     9.  Square foot            "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"      4. Metri patrati         10. Square inch            "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"      5. Decametri patrati     11. Square yard            "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"      6. Hectometri patrati                               "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea din care se converteste:          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea in care se converteste:           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti cantitatea:                                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Rezultat:                                              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);
    gotoxy(50,24);
    cin>>y;
    gotoxy(49,26);
    cin>>z;
    gotoxy(28,28);
    cin>>cant;
    gotoxy(15,30);


    long double v[11],rez;
    v[1]=1000000.0;
    v[2]=10000.0;
    v[3]=100.0;
    v[4]=1.0;
    v[5]=0.01;
    v[6]=0.0001;
    v[7]=0.000001;
    v[8]=0.00024710538147;
    v[9]=10.763910417;
    v[10]=1550.0031;
    v[11]=1.1959900463;

    rez=cant/v[y]*v[z];
    return rez;
}

 long double densitate(int &x)
{
    int i,y,z;
    long double cant;

    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Alegeti unitatile de masura din lista de mai jos:      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   1. grame/centimetru cub       8.  Kilograme/metru cub  "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   2. grame/litru                9.  Pounds/cubic foot    "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   3. grame/metru cub            10. Pounds/cubic inch    "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   4. grame/mililitru            11. miligrame/cm cub     "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   5. grame/milimetru cub        12. miligrame/litru      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   6. kilograme/centimetru cub   13. miligrame/metru cub  "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   7. kilograme/litru            14. tone/metru cub       "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea din care se converteste:          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea in care se converteste:           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti cantitatea:                                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Rezultat:                                              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);
    gotoxy(50,25);
    cin>>y;
    gotoxy(49,27);
    cin>>z;
    gotoxy(28,29);
    cin>>cant;
    gotoxy(15,31);


    long double v[14],rez;
    v[1]=0.001;
    v[2]=1.0;
    v[3]=1000.0;
    v[4]=0.001;
    v[5]=0.000001;
    v[6]=0.000001;
    v[7]=0.001;
    v[8]=1;
    v[9]=0.062427960841;
    v[10]=0.000036127292153;
    v[11]=1.0;
    v[12]=1000.0;
    v[13]=1000000.0;
    v[14]=0.001;

    rez=cant/v[y]*v[z];
    return rez;
}

long double energie(int &x)
{
    int i,y,z;
    long double cant;

    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Alegeti unitatile de masura din lista de mai jos:      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   1. British Thermal Units    8.  Kilojoule              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   2. Erg                      9.  Kilowatt-ora           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   3. Calorie                  10. Tona de carbune        "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   4. Picior-funt forta        11. Tona de combustibil    "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   5. Tol-funt forta           12. Tona petrol            "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   6. Kilogram-metru           13. Watt-ora               "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   7. Kilocalorie              14. Joule                  "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea din care se converteste:          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea in care se converteste:           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti cantitatea:                                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Rezultat:                                              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);
    gotoxy(50,25);
    cin>>y;
    gotoxy(49,27);
    cin>>z;
    gotoxy(28,29);
    cin>>cant;
    gotoxy(15,31);


    long double v[14],rez;
    v[1]=0.00094781707775;
    v[2]=10000000;
    v[3]=0.23884589663;
    v[4]=0.73756217557;
    v[5]=8.8507461068;
    v[6]=0.1019716213;
    v[7]=0.00023884589663 ;
    v[8]=0.001;
    v[9]=2.7777777778e-7;
    v[10]=3.4120842375e-11 ;
    v[11]=3.4120842375e-11 ;
    v[12]=2.3884589663e-11;
    v[13]=0.00027777777778;
    v[14]=1;

    rez=cant/v[y]*v[z];
    return rez;
}

long double forta(int &x)
{
    int i,y,z;
    long double cant;

    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Alegeti unitatile de masura din lista de mai jos:      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             1. Dyne                                      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             2. Kilograme forta                           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             3. Kilopond                                  "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             4. Pound-force                               "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             5. Newtoni                                   "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea din care se converteste:          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea in care se converteste:           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti cantitatea:                                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Rezultat:                                              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);
    gotoxy(50,23);
    cin>>y;
    gotoxy(49,25);
    cin>>z;
    gotoxy(28,27);
    cin>>cant;
    gotoxy(15,29);


    long double v[6],rez;
    v[1]=100000;
    v[2]=0.1019716213;
    v[3]=0.1019716213;
    v[4]=0.22480894387;
    v[5]=1;


    rez=cant/v[y]*v[z];
    return rez;
}

long double lungime(int &x)
{
    int i,y,z;
    long double cant;

    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Alegeti unitatile de masura din lista de mai jos:      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"       1. Milimetri            7.  Kilometri              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"       2. Centimetri           8.  Feet                   "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"       3. Decimetri            9.  Inches                 "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"       4. Metri                10. Mile                   "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"       5. Decametri            11. Yards                  "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"       6. Hectometri                                      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea din care se converteste:          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea in care se converteste:           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti cantitatea:                                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Rezultat:                                              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);
    gotoxy(50,24);
    cin>>y;
    gotoxy(49,26);
    cin>>z;
    gotoxy(28,28);
    cin>>cant;
    gotoxy(15,30);


    long double v[11],rez;
    v[1]=1000;
    v[2]=100;
    v[3]=10;
    v[4]=1;
    v[5]=0.1;
    v[6]=0.01;
    v[7]=0.001;
    v[8]=3.280839895;
    v[9]=39.37007874;
    v[10]=0.00062137119224;
    v[11]=1.0936132983;


    rez=cant/v[y]*v[z];
    return rez;
}

long double masa(int &x)
{
    int i,y,z;
    long double cant;

    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Alegeti unitatile de masura din lista de mai jos:      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"       1. Miligrame            6. Hectograme              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"       2. Centigrame           7. Kilograme               "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"       3. Decigrame            8. Pounds                  "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"       4. Grame                9. Tone                    "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"       5. Decagrame                                       "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea din care se converteste:          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea in care se converteste:           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti cantitatea:                                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Rezultat:                                              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);
    gotoxy(50,23);
    cin>>y;
    gotoxy(49,25);
    cin>>z;
    gotoxy(28,27);
    cin>>cant;
    gotoxy(15,29);


    long double v[10],rez;
    v[1]=1000;
    v[2]=100;
    v[3]=10;
    v[4]=1;
    v[5]=0.1;
    v[6]=0.01;
    v[7]=0.001;
    v[8]=0.0022046226218;
    v[9]=0.000001;



    rez=cant/v[y]*v[z];
    return rez;
}

long double presiune(int &x)
{
    int i,y,z;
    long double cant;

    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Alegeti unitatile de masura din lista de mai jos:      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"  1. Atmosfere                   7.  Pound/Square foot    "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"  2. Bari                        8.  Mm coloana de apa    "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"  3. Inch coloana de apa         9.  Mm coloana de mercur "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"  4. Inch coloana de mercur      10. Pascali              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"  5. Kilopond/centimetru patrat  11. PSI                  "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"  6. Kilopascali                 12. Torri                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea din care se converteste:          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea in care se converteste:           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti cantitatea:                                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Rezultat:                                              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);
    gotoxy(50,24);
    cin>>y;
    gotoxy(49,26);
    cin>>z;
    gotoxy(28,28);
    cin>>cant;
    gotoxy(15,30);


    long double v[13],rez;
    v[1]=0.0000098692316931;
    v[2]=0.00001;
    v[3]=0.0040146307867;
    v[4]=0.00029529983071;
    v[5]=0.00001019716213;
    v[6]=0.001;
    v[7]=0.020885434273;
    v[8]=0.1019716213;
    v[9]=0.007500615613;
    v[10]=1;
    v[11]=0.00014503773801;
    v[12]=0.0075006167382;

    rez=cant/v[y]*v[z];
    return rez;
}

long double putere(int &x)
{
    int i,y,z;
    long double cant;

    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Alegeti unitatile de masura din lista de mai jos:      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             1. Cai Putere                                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             2. Cheval Vapeur                             "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             3. Horse Power                               "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             4. Kilowatti                                 "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             5. Pferdestarke (PS)                         "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             6. Watti                                     "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea din care se converteste:          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea in care se converteste:           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti cantitatea:                                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Rezultat:                                              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);
    gotoxy(50,24);
    cin>>y;
    gotoxy(49,26);
    cin>>z;
    gotoxy(28,28);
    cin>>cant;
    gotoxy(15,30);


    long double v[6],rez;
    v[1]=1.3596216173;
    v[2]=1.3596216173;
    v[3]=1.3410220924;
    v[4]=1;
    v[5]=1.3596216173;
    v[6]=1000;


    rez=cant/v[y]*v[z];
    return rez;
}

long double temperatura(int &x)
{
    int i,y,z;
    long double cant;

    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Alegeti unitatile de masura din lista de mai jos:      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             1. Grade Celsius                             "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             2. Grade Fahrenheit                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             3. Grade Rankine                             "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             4. Grade Kelvin                              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea din care se converteste:          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea in care se converteste:           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti cantitatea:                                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Rezultat:                                              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);
    gotoxy(50,22);
    cin>>y;
    gotoxy(49,24);
    cin>>z;
    gotoxy(28,26);
    cin>>cant;
    gotoxy(15,28);


    if(y==1)
    {
        if(z==1)
            return cant;
        if(z==2)
            return cant*1.8+32;
        if(z==3)
            return (cant+273.15)*1.8;
        if(z==4)
            return cant+273.15;
    }
    if(y==2)
    {
        if(z==1)
            return (cant-32)/1.8;
        if(z==2)
            return cant;
        if(z==3)
            return cant+459.67;
        if(z==4)
            return (cant+459.67)/1.8;
    }
    if(y==3)
    {
        if(z==1)
            return (cant-491.67)/1.8;
        if(z==2)
            return cant-459.67;
        if(z==3)
            return cant;
        if(z==4)
            return cant/1.8;
    }
    if(y==4)
    {
        if(z==1)
            return cant-273.15;
        if(z==2)
            return cant*1.8-459.67;
        if(z==3)
            return cant*1.8;
        if(z==4)
            return cant;
    }
}

long double procentaj(int &x)
{
    long double cant,proc,i;

    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             Introduceti numarul:                         "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             Introduceti procentul (%):                   "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"             Rezultat:                                    "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);
    gotoxy(35,15);
    cin>>cant;
    gotoxy(41,17);
    cin>>proc;
    gotoxy(24,19);
    return cant*proc/100;
}

long double timp(int &x)
{
    long double cant;
    int i,z,y;

    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Alegeti unitatile de masura din lista de mai jos:      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"         1. Milisecunde    5. Zile                        "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"         2. Secunde        6. Saptamani                   "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"         3. Minute         7. Luni                        "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"         4. Ore            8. Ani                         "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea din care se converteste:          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea in care se converteste:           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti cantitatea:                                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Rezultat:                                              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);

    gotoxy(50,22);
    cin>>y;
    gotoxy(49,24);
    cin>>z;
    gotoxy(28,26);
    cin>>cant;
    gotoxy(15,28);


    long double v[9],rez;
    v[1]=60000;
    v[2]=60;
    v[3]=1;
    v[4]=0.016666666666666666;
    v[5]=0.0006944444444444445;
    v[6]=0.0000992063492063492;
    v[7]=0.000022831050228310503;
    v[8]=0.000001902587519025875;


    rez=cant/v[y]*v[z];
    return rez;
}

long double viteza(int &x)
{
    long double cant;
    int i,z,y;

    cout<<(char)(-55);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-69);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Alegeti unitatile de masura din lista de mai jos:      "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"         1. Cm/secunda       8.  Metri/minut              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"         2. Cm/minut         9.  Metri/ora                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"         3. Cm/ora           10. Km/secunda               "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"         4. Feet/secunda     11. Km/minut                 "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"         5. Feet/minut       12. Km/ora                   "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"         6. Feet/ora         13. Mile/secunda             "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"         7. Metri/secunda    14. Mile/ora                 "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea din care se converteste:          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti unitatea in care se converteste:           "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Introduceti cantitatea:                                "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"   Rezultat:                                              "<<(char)(-70);
    cout<<endl;
    cout<<(char)(-70);cout<<"                                                          "<<(char)(-70);
    cout<<endl;

    cout<<(char)(-56);
    for(i=0;i<58;i++)
        cout<<(char)(-51);
    cout<<(char)(-68);

    gotoxy(50,25);
    cin>>y;
    gotoxy(49,27);
    cin>>z;
    gotoxy(28,29);
    cin>>cant;
    gotoxy(15,31);


    long double v[15],rez;
    v[1]=100;
    v[2]=6000;
    v[3]=360000;
    v[4]=3.2808398950131;
    v[5]=196.85039370079;
    v[6]=11811.023622047;
    v[7]=1;
    v[8]=60;
    v[9]=3600;
    v[10]=0.001;
    v[11]=0.06;
    v[12]=3.6;
    v[13]=0.037282271534;
    v[14]=2.2369362920544;

    rez=cant/v[y]*v[z];
    return rez;
}

int main()
{
    int x,i=0;
    meniu:
    banner(x);
    menu(x);
    system("cls");
    if(x==1)
    {
        banner(x);
        cout<<arie(x);
        gotoxy(0,33);
    }if(x==2)
    {
        banner(x);
        cout<<densitate(x);
        gotoxy(0,33);
    }if(x==3)
    {
        banner(x);
        cout<<energie(x);
        gotoxy(0,33);
    }if(x==4)
    {
        banner(x);
        cout<<forta(x);
        gotoxy(0,33);
    }
    if(x==5)
    {
        banner(x);
        cout<<lungime(x);
        gotoxy(0,33);
    }
    if(x==6)
    {
        banner(x);
        cout<<masa(x);
        gotoxy(0,33);
    }
    if(x==7)
    {
        banner(x);
        cout<<presiune(x);
        gotoxy(0,33);
    }
    if(x==8)
    {   proc:
        banner(x);
        cout<<procentaj(x);
        gotoxy(0,22);
        revenire(x);
        if(x==1)
            goto proc;
        if(x==2)
            goto meniu;
        if(x==3)
            goto sfarsit;
    }
    if(x==9)
    {
        banner(x);
        cout<<putere(x);
        gotoxy(0,33);
    }
    if(x==10)
    {
        banner(x);
        cout<<temperatura(x);
        gotoxy(0,33);
    }
    if(x==11)
    {
        banner(x);
        cout<<timp(x);
        gotoxy(0,33);
    }
    if(x==13)
    {
        banner(x);
        cout<<viteza(x);
        gotoxy(0,33);
    }

    sfarsit:
    return 0;
}
