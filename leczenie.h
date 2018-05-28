

class Leczenie

{
public:

 int leczenie_d1 (int lecz4)
{

                                         do
                                         {



                                            if(d_m_lecz>0)//sprawdza czy gracz posiada przedmiot leczacy
                                              {
                                                gracz=gracz+d_miksturka;
                                                d_m_lecz=d_m_lecz-1;
                                                 if(gracz<=50) //sprawdza ilosc zyc gracza jest mniejsz od 50 jesli tak to leczy gracza
                                                {

                                                   cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                   cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                }
                                                  else if(lvl == 0 ) //ten if nie pozwala przekroczyc limitu zyc gracza czyli 50 na danym poziomie.
                                                  {
                                                      gracz=gracz-gracz+50;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                  }
                                                    else if (lvl== 1)
                                                        {
                                                      gracz=gracz-gracz+65;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                  }
                                                  else if (lvl== 2)
                                                        {
                                                      gracz=gracz-gracz+65;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                  }
                                              }

                                            else cout << "Niemasz sie czym uleczyc " ;
                                              }while((gracz<50) && (lecz>0) || (gracz<65) && (lecz>0) || (gracz<80) && (lecz>0) );



}

 int leczenie_s1 (int lecz3)
 {

                                         do
                                         {



                                            if(s_m_lecz>0)//sprawdza czy gracz posiada przedmiot leczacy
                                              {
                                                gracz=gracz+s_miksturka;
                                                s_m_lecz=s_m_lecz-1;
                                                   if(gracz<=50) //sprawdza ilosc zyc gracza jest mniejsz od 50 jesli tak to leczy gracza
                                                {

                                                   cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                   cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                }
                                                  else if(lvl == 0 ) //ten if nie pozwala przekroczyc limitu zyc gracza czyli 50 na danym poziomie.
                                                  {
                                                      gracz=gracz-gracz+50;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                  }
                                                    else if (lvl== 1)
                                                        {
                                                      gracz=gracz-gracz+65;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                  }
                                                  else if (lvl== 2)
                                                        {
                                                      gracz=gracz-gracz+65;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                  }
                                              }

                                            else cout << "Niemasz sie czym uleczyc " ;
                                              }while((gracz<50) && (lecz>0) || (gracz<65) && (lecz>0) || (gracz<80) && (lecz>0) );




 }

 int leczenie_m1 (int lecz2)
 {

                                         if(lvl == 0)
                      {
                                    do
                                         {
                                            if(m_m_lecz>0)//sprawdza czy gracz posiada przedmiot leczacy
                                              {
                                                gracz = gracz + m_m_lecz;
                                                   lecz = lecz - 1;
                                                  if(gracz<=50) //sprawdza ilosc zyc gracza jest mniejsz od 50 jesli tak to leczy gracza
                                                {

                                                   cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                   cout << "pozostalo Ci przedmiotow leczacych: "<<m_m_lecz<<endl;
                                                }
                                                  else if(gracz>50) //ten if nie pozwala przekroczyc limitu zyc gracza czyli 50.
                                                  {
                                                      gracz=gracz-gracz+50;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<m_m_lecz<<endl;
                                                  }
                                              }

                                            else cout << "Niemasz sie czym uleczyc " ;
                                              }while((gracz<50) && (m_m_lecz>0));
                                        }
                                        if(lvl == 1)
                      {
                                    do
                                         {
                                            if(m_m_lecz>0)//sprawdza czy gracz posiada przedmiot leczacy
                                              {
                                                gracz = gracz +m_m_lecz;
                                                   m_m_lecz = m_m_lecz - 1;
                                                  if(gracz<=65) //sprawdza ilosc zyc gracza jest mniejsz od 50 jesli tak to leczy gracza
                                                {

                                                   cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                   cout << "pozostalo Ci przedmiotow leczacych: "<<m_m_lecz<<endl;
                                                }
                                                  else if(gracz>65) //ten if nie pozwala przekroczyc limitu zyc gracza czyli 50.
                                                  {
                                                      gracz=gracz-gracz+65;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<m_m_lecz<<endl;
                                                  }
                                              }

                                            else cout << "Niemasz sie czym uleczyc " ;
                                              }while((gracz<65) && (m_m_lecz>0));
                                        }

                                        if(lvl == 2)
                      {
                                    do
                                         {
                                            if(m_m_lecz>0)//sprawdza czy gracz posiada przedmiot leczacy
                                              {
                                                gracz = gracz +m_m_lecz;
                                                   m_m_lecz = m_m_lecz - 1;
                                                  if(gracz<=80) //sprawdza ilosc zyc gracza jest mniejsz od 50 jesli tak to leczy gracza
                                                {

                                                   cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                   cout << "pozostalo Ci przedmiotow leczacych: "<<m_m_lecz<<endl;
                                                }
                                                  else if(gracz>80) //ten if nie pozwala przekroczyc limitu zyc gracza czyli 50.
                                                  {
                                                      gracz=gracz-gracz+80;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<m_m_lecz<<endl;
                                                  }
                                              }

                                            else cout << "Niemasz sie czym uleczyc " ;
                                              }while((gracz<80) && (m_m_lecz>0));
                                        }


 }

 int leczenie (int lecz1)
 {
                      if(lvl == 0)
                      {
                                    do
                                         {
                                            if(lecz>0)//sprawdza czy gracz posiada przedmiot leczacy
                                              {
                                                gracz = gracz +mieso;
                                                   lecz = lecz - 1;
                                                  if(gracz<=50) //sprawdza ilosc zyc gracza jest mniejsz od 50 jesli tak to leczy gracza
                                                {

                                                   cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                   cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                }
                                                  else if(gracz>50) //ten if nie pozwala przekroczyc limitu zyc gracza czyli 50.
                                                  {
                                                      gracz=gracz-gracz+50;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                  }
                                              }

                                            else cout << "Niemasz sie czym uleczyc " ;
                                              }while((gracz<50) && (lecz>0));
                                        }
                                        if(lvl == 1)
                      {
                                    do
                                         {
                                            if(lecz>0)//sprawdza czy gracz posiada przedmiot leczacy
                                              {
                                                gracz = gracz +mieso;
                                                   lecz = lecz - 1;
                                                  if(gracz<=65) //sprawdza ilosc zyc gracza jest mniejsz od 50 jesli tak to leczy gracza
                                                {

                                                   cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                   cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                }
                                                  else if(gracz>65) //ten if nie pozwala przekroczyc limitu zyc gracza czyli 50.
                                                  {
                                                      gracz=gracz-gracz+65;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                  }
                                              }

                                            else cout << "Niemasz sie czym uleczyc " ;
                                              }while((gracz<65) && (lecz>0));
                                        }

                                        if(lvl == 2)
                      {
                                    do
                                         {
                                            if(lecz>0)//sprawdza czy gracz posiada przedmiot leczacy
                                              {
                                                gracz = gracz +mieso;
                                                   lecz = lecz - 1;
                                                  if(gracz<=80) //sprawdza ilosc zyc gracza jest mniejsz od 50 jesli tak to leczy gracza
                                                {

                                                   cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                   cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                }
                                                  else if(gracz>80) //ten if nie pozwala przekroczyc limitu zyc gracza czyli 50.
                                                  {
                                                      gracz=gracz-gracz+80;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                  }
                                              }

                                            else cout << "Niemasz sie czym uleczyc " ;
                                              }while((gracz<80) && (lecz>0));
                                        }



                                     /*   do
                                         {
                                            if(lecz>0)//sprawdza czy gracz posiada przedmiot leczacy
                                              {
                                                  gracz=gracz+mieso;
                                                     lecz=lecz-1;
                                                if((gracz<=50) && (lvl == 0 ) || (gracz<=65) && (lvl == 1 ) || (gracz<=80) && (lvl == 2 )) //sprawdza ilosc zyc gracza jest mniejsz od 50 jesli tak to leczy gracza
                                                {
                                                   cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                   cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                }
                                                  if(lvl == 0 ) //ten if nie pozwala przekroczyc limitu zyc gracza czyli 50 na danym poziomie.
                                                  {
                                                      gracz=gracz-gracz+50;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                  }
                                                  if (lvl == 1)
                                                        {
                                                      gracz=gracz-gracz+65;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                  }
                                                 if (lvl == 2)
                                                        {
                                                      gracz=gracz-gracz+80;
                                                      cout << "Uleczyles sie twoj stan zdrowia to: "<<gracz<<endl;
                                                      cout << "pozostalo Ci przedmiotow leczacych: "<<lecz<<endl;
                                                  }
                                              }
                                            else cout << "Niemasz sie czym uleczyc " ;
                                              }while((gracz=50) || (gracz=65) || (gracz=80));
*/





 }


int wybor_leczenia()
 {

 cout << "Czy chcesz sie uzdrowic "<<endl;
                        cout << "1. Tak"<<endl;
                        cout << "2. Nie"<<endl;

                                wybor4=getch();

                                switch (wybor4)
                                {
                                    case '1':
                                              cout << "Czym chcesz sie uzdrowic?"<<endl;
                                              cout << "1. Miesem?"<<endl;
                                              cout << "2. Mala miksturka?"<<endl;
                                              cout << "3. Srednia miksturka?"<<endl;
                                              cout << "4. Duza miksturka?"<<endl;
                                                wybor6=getch();
                                              switch(wybor6)

    {
        case '4':
         leczenie_d1(d_miksturka);
        break;
          case '3':
         leczenie_s1(s_miksturka);
        break;
         case '2':
        leczenie_m1(m_miksturka);
        break;
         case '1':
        leczenie(mieso);
        break;

    }
                             }
}

};

