#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <iomanip>
#include <string>
#include <process.h>
#include <thread>


using namespace std;

void __cdecl ThreadProc( void * Args )
{
    Sleep(1000);
    flaga = 1;
    _endthread();
}

   class Przeciwnicy
 {
 public:




void rysuj_zdjecie1(FILE *postac)
{
    char read_string1[200];

    while(fgets(read_string1,sizeof(read_string1),postac) != NULL)
        printf("%s",read_string1);
}


 void rysuj_zdjecie(FILE *postac)
{
    char read_string[200];

    while(fgets(read_string,sizeof(read_string),postac) != NULL)
        printf("%s",read_string);
}

void rysuj_zdjecie3(FILE *postac)
{
    char read_string1[200];

    while(fgets(read_string1,sizeof(read_string1),postac) != NULL)
        printf("%s",read_string1);
}


 void rysuj_zdjecie4(FILE *postac)
{
    char read_string[200];

    while(fgets(read_string,sizeof(read_string),postac) != NULL)
        printf("%s",read_string);
}
 void rysuj_zdjecie5(FILE *postac)
 {
     char read_string[200];

     while(fgets(read_string,sizeof(read_string),postac) != NULL)
        printf("%s",read_string);
 }



   int wilk()
   {

                        cout << "Atakujesz wilka "<<endl;
                         cout<<"Ilosc zyc wilka "<<wilk_0<<endl;
                          cout<<"_______________________________"<<endl;

do
{
                char *nazwa_pliku = "E:\\gra\\obrazki\\image.txt";
                FILE *postac = NULL;
                char *nazwa_pliku1 = "E:\\gra\\obrazki\\image2.txt";
                FILE *postac1 = NULL;

                            if(((postac = fopen(nazwa_pliku,"r")) == NULL)||((postac1 = fopen(nazwa_pliku1,"r")) == NULL))
                            {
                                fprintf(stderr,"Niema takiego pliku%s\n",nazwa_pliku, nazwa_pliku1);
                                return 1;

                            }

                                int  c=(rand() % 3)  + 4;

                                int  d=(rand() % 2)  +2;

                            znak=getch();
                            switch(znak)
                            {
                            case  'q':


                                rysuj_zdjecie1 (postac1);

                                  wilk_0=wilk_0-c;

                                cout<<endl;
                                 cout << "Obrazenia jakie zadales "<<c<<endl;
                                // Sleep(1500);
                                  break;
                            }
                            HANDLE hThread =( HANDLE ) _beginthread( ThreadProc, 0, NULL );
                            znak1=getch();
                            switch(znak1)
                                {

                                    case 'w': //sluzy do uniku ataku
                                        if(flaga == 0)

                                        {
                                            cout << endl;
                                            cout << "Udalo Ci sie zrobic unik "<<endl;

                                        }
                                    else if (flaga == 1)
                                    {
                                     if(wilk_0 > 1)
                                       {
                                        rysuj_zdjecie (postac);
                                        cout<<endl;
                                        cout << "Obrazenia jakie otrzymales "<<d<<endl;
                                        gracz=gracz-d;
                                        flaga--;
                                  //  Sleep(1500);

                                       }}
                                       break;
                                       }


                                   cout<<"_______________________________"<<endl;
                                   cout << "Pozostalo ci zyc "<<gracz<<endl;

                                     if(wilk_0>0)
                                        {
                                          cout<<"Ilosc zyc wilka "<<wilk_0<<endl;
                                          cout<<"_______________________________"<<endl;
                                        Sleep(1500);
                                        }

                                     else;


}while (wilk_0>0);
                            cout<<"Ilosc zyc wilk: 0"<<endl;

                            srand(time(NULL));
                            int  a=(rand() % 3)  + 1;
                               lecz=lecz+a;
                                  cout << "Wilk zostal pokany zdobyles "<< a <<" mieso ktorym mozesz sie uzdrowic doda ci 10 pkt. hp "<<endl;

                                     cout <<"Uzyskales 25 pkt. doswiadczenia"<<endl;
                                      exp=exp+25;
                                       if(exp>250)
                                          {
                                             lvl++;
                                             gracz=gracz+15;
                                             cout << "osiagnales: " <<lvl<<" poziom"<<endl;

                                          }
                                             else;
                                             wilk_0=wilk_0-wilk_0+15;

}
   int scierwojad()
   {
    cout << "Atakujesz scierowojada "<<endl;


                          cout<<"Ilosc zyc scierojada "<<scierwojad_0<<endl;
                           cout<<"_______________________________"<<endl;
                            do
                            {
                                 char *nazwa_pliku2 = "C:\\programowanie\\gra\\obrazki\\image4.txt";
                                 FILE *postac3 = NULL;
                                 char *nazwa_pliku3 = "C:\\programowanie\\gra\\obrazki\\image5.txt";
                                 FILE *postac4 = NULL;
                                 if(((postac3 = fopen(nazwa_pliku2,"r")) == NULL)||((postac4 = fopen(nazwa_pliku3,"r")) == NULL))
                            {
                                fprintf(stderr,"Niema takiego pliku%s\n",nazwa_pliku2, nazwa_pliku3);
                                return 1;

                            }

                               int  c=(rand() % 3)  + 4;
                                scierwojad_0=scierwojad_0-c;
                                int  d=(rand() % 2)  +4;

                                rysuj_zdjecie3(postac3);
                                   cout<<endl;
                                   cout << "Obrazenia jakie zadales "<<c<<endl;


                                Sleep(1500);

                                if(scierwojad_0>=1) //nie wyswietla i nie atakuje stwora jezeli zabijesz wczesniej stwora
                                {
                                     rysuj_zdjecie1 (postac4);
                                     cout<<endl;
                                     cout << "Obrazenia jakie otrzymales "<<d<<endl;
                                     gracz=gracz-d;
                                    Sleep(1500);
                                }


                                    cout<<"_______________________________"<<endl;
                                   cout << "Pozostalo ci zyc "<<gracz<<endl;
                                     if(scierwojad_0>=0)
                                     {
                                     cout<<"Ilosc zyc scierwojada: "<<scierwojad_0<<endl;
                                      cout<<"_______________________________"<<endl;
                                      Sleep(1500);
                                     }
                                     else;

                            }while (scierwojad_0>0);

                            int  z=(rand() % 3)  + 1;
                             lecz=lecz+z;
                                 cout << "Scierwojad zostal pokany zdobyles "<< z <<" sztuk miesa ktorym mozesz sie uzdrowic doda Ci 10 pkt. hp "<<endl;
                                  cout <<"Uzyskales 25 pkt. doswiadczenia"<<endl;
                                      exp=exp+25;
                                       if(exp>250)
                                          {
                                             lvl++;
                                             gracz=gracz+15;
                                             cout << "osiagnales: " <<lvl<<" poziom"<<endl;

                                          }
                                             else;

                                                 scierwojad_0=scierwojad_0-scierwojad_0+20;

}

  int zjawa()
  {

       cout << "Atakujesz zjawe " << endl;
       cout << "Ilosc zyc zjawy " << zjawa_0<<endl;
       cout<<"_______________________________"<<endl;


       do
        {
            int c=(rand() % 6) +8;
            zjawa_0=zjawa_0-c;
            int d=(rand() % 4) +6;
            gracz=gracz-d;

            cout << endl;
            cout << "Obrazenia jakie zadales "<<c<<endl;
            cout << "Obrazenia jakie otrzymales "<<d<<endl;
            cout<<"_______________________________"<<endl;
            Sleep(1500);
            cout<<"_______________________________"<<endl;
                                   cout << "Pozostalo ci zyc "<<gracz<<endl;
                                     if(zjawa_0>=0)
                                     {
                                     cout<<"Ilosc zyc zjawy: "<<zjawa_0<<endl;
                                      cout<<"_______________________________"<<endl;
                                      Sleep(1500);
                                     }







        }while (zjawa_0>0);
         cout << "Zjawa zostala pokana znalazles przyneij klucz "<<endl;
                                  cout <<"Uzyskales 40 pkt. doswiadczenia"<<endl;
                                      exp=exp+40;
                                       if(exp>400)
                                          {
                                             lvl++;
                                             gracz=gracz+15;
                                             cout << "osiagnales: " <<lvl<<" poziom"<<endl;

                                          }
                                             else;

        zjawa_0=zjawa_0-zjawa_0+30;
  }
};

