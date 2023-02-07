#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <windows.h>
#include <chrono>
#include <thread>
#include "menu.h" //// Dodanie naglowka

using namespace std;




int main()
{
    HANDLE kolory;
    kolory = GetStdHandle(STD_OUTPUT_HANDLE); ////Dodanie mozliwosci zmiany koloru w projekcie
    
    int wybierz_quiz;
    int punkty=0;
    char odpowiedz;
    char wyborUzytkownika;
    string wyborCzyZamknac;
    
    
    ///QUIZ 1 "MAPA SWIATA"
    string pytania1[10] = { "1. Ktore z tych panstw nie lezy na Polwyspie Arabskim?", "2. Ktory kontynent jest drugim co do wielkosci?", "3. Jakie panstwo rozciaga sie wzdluz zachodniego wybrzeza Ameryki Poludniowej?", "4. Ktore z tych panstw ma dostep do morza?", "5. Ktory obszar nie jest kontynentem?",
       "6. Ktore z wymienionych panstw lezy nad Morzem Karaibskim i Oceanem Spokojnym?", "7. Ktore z wymienionych panstw Afryki jest najwieksze?", "8. Ktore z wymienionych panstw ma najdluzsza linie brzegowa?", "9. Ktore z panstw NIE lezy na terenie Azji?", "10. Najmniejszym krajem swiata jest: " };
    string odpowiedzi1[10] = { "a", "b", "b", "a", "a", "c", "b", "b", "c", "b" };
    string wybor1[10][3] = { { "A) Iran ", "B) Jemen", "C) Oman" }, { "A) Europa", "B) Afryka", "C) Ameryka Po³udniowa " }, { "A) Wenezuela", "B) Chile", "C) Boliwia" }, { "A) Czarnogra", "B) Austria", "C) Serbia", },{ "A) Arktyka", "B) Australia", "C) Europa"}, { "A) Chile", "B) Ekwador", "C) Kolumbia"},
        { "A) Nigeria", "B) Algieria ", "C) Namibia"}, { "A) Chiny", "B) Indonezja ", "C) Rosja"}, { "A) Indonezja", "B) Armenia", "C) Liberia "},{ "A) Palau", "B) Watykan", "C) Antigua & Barbuda"} };
        
    //QUIZ 2 "ZWIERZETA"
    
    string pytania2[10] = { "1. Ktore z tych zwierzat maja wibrysy?", "2. Jak nazywa sie barwnik wytwarzany przez matwy?", "3. Zwierzeciem wymarlym jest:", "4. Gawra to:", "5. Wielblad jednogarbny to inaczej:",
       "6. Na ktorym kontynencie wystêpuje gnu?", "7. Jak sie nazywa dluga, sztywna os piora?", "8. Ktore z tych zwierzat NIE wystepuja w Morzu Baltyckim?", "9. Najwiekszy gatunek pingwinow to:", "10. Wskaz najwiekszego gryzonia swiata" };
    string odpowiedzi2[10] = { "a", "c", "a", "b", "b", "b", "a", "b", "c", "c" };
    string wybor2[10][3] = { { "A) Gryzonie i koty ", "B) Zadne z powyzszych", "C) Wszystkie kregowce " }, { "A) Indygo", "B) Ochra", "C) Sepia" }, { "A) Tur", "B) Jak", "C) Ryzowiec siwy" }, { "A) samica losia", "B) legowisko niedzwiedzia", "C) okres godowy rysi", },{ "A) baktrian", "B) dromader", "C) gwanako"}, { "A) W Eurazji", "B) W Afryce", "C) W Ameryce PoLudniowej"}, { "A) Stosina", "B) Sterowka", "C) Lodyzka"}, { "A) Krewetki", "B) Homary", "C) Kraby "}, { "A) Pingwin bialobrewy", "B) Pingwin adeli", "C) Pingwin cesarski"},{ "A) Urson amerykanski", "B) Paka nizinna", "C) Kapibara wielka"} };
        
    ///QUIZ 3 "HISTORIA"
   
    string pytania3[10] = { "1. W ktorym roku wybuchlo powstanie warszawskie?", "2. Jak nazywa sie pismo, ktorym poslugiwali sie starozytni Egipcjanie?", "3. W ktorym wieku zakon krzyzacki rozpoczal budowe zamku w Malborku?", "4. Kto byl przywodca najwiekszego w historii Rzymu powstania niewolnikow?", "5. Jak nazywal sie najpotezniejszy bog w mitologii rzymskiej?",
       "6. Jakie wydarzenie mialo miejsce w 753 r. p.n.e.?", "7. W 622 roku Mahomet uciekl:", "8. Ktorej z bitew nie stoczyl Napoleon?", "9. Jaki numer mial slynny polski dywizjon bioracy udzial w bitwie o Anglie?", "10. Ktory polityk nie bral udzialu w konferencji teheranskiej?" };
    string odpowiedzi3[10] = { "b", "b", "c", "a", "b", "c", "b", "c", "c", "a" };
    string wybor3[10][3] = { { "A) 1945 ", "B) 1944", "C) 1943 " }, { "A) Pismo wezelkowe", "B) Hieroglify", "C) Pismo klinowe" }, { "A) XI", "B) XII", "C) XIII" }, { "A) Spartakus", "B) Juliusz Cezar", "C) Flawiusz", },
    { "A) Zeus", "B) Jowisz", "C) Mars"}, { "A) Zalozono Konstantynopol", "B) Wprowadzono kalendarz julianski", "C) Zalozono Rzym"}, { "A) Z Sodomy do Gomory", "B) Z Mekki do Medyny", "C) Z Galilei do Jerozolimy"}, { "A) Bitwa pod Waterloo", "B) Bitwa pod Ulm", "C) Bitwa pod Wiedniem"}, { "A) 105", "B) 44", "C) 303"}, { "A) Charles de Gaulle", "B) Jozef Stalin", "C) Winston Churchill"} };
   
       
    //QUIZ 4 "SPORT"
    string pytania4[10] = { "1. Ile zlotych pilek zdobyl Leo Messi (stan na luty 2023)?", "2. Gdzie odbyly sie pierwsze mistrzostwa swiata w pilce noznej? ", "3. Na jakim torze odbyl sie pierwszy w historii wyscig Formuly 1?", "4. W jakim zespole Michael Schumacher odniosl swoje pierwsze zwyciestwo?", "5. Iga Swiatek urodzila siê w 2001 roku. W jakim miescie?",
       "6. Co ile lat odbywaja sie Letnie Igrzyska Olimpijskie?", "7. W ktorej z ponizszych dyscyplin jest najwiecej zawodnikow na boisku?", "8. Kto urodzil sie jako pierwszy?", "9. Z ktorego kraju pochodzi legendarna plywaczka, trzykrotna mistrzyni olimpijska i dziewieciokrotna swiata, Katinka Hosszu?", "10. Kto strzelil gola dla Polski w zwycieskim meczu z Japonia na MS 2018?" };
    string odpowiedzi4[10] = { "c", "b", "a", "a", "a", "a", "c", "c", "c", "a" };
    string wybor4[10][3] = { { "A) 4 ", "B) 5", "C) 7 " }, { "A) Paragwaj", "B) Urugwaj ", "C) Francja " }, { "A) Silverstone", "B) Monza", "C) Bahrajn" }, { "A) Ferrari", "B) Benetton", "C) Mclaren", },{ "A) Warszawa", "B) Poznan", "C) Lublin"}, { "A) 4", "B) 5", "C) 6"},
        { "A) Siatkowka", "B) Koszykowka", "C) Pilka nozna"}, { "A) Justyna Kowalczyk ", "B) Robin van Persie ", "C) Pawel Zagumny "}, { "A) z Turcji", "B) z Armenii", "C) z Wegier"},{ "A) Bednarek", "B) Piszczek", "C) Lewandowski"} };

        //QUIZ 5  "KOMPOZYTORZY" 
    string pytania5[10] = { "1. Gdzie i kiedy urodzil sie Fryderyk Chopin?", "2. Skad pochodzil Wolfgang Amadeusz Mozart?", "3. Polskim skrzypkiem/skrzypaczka XIX w. byl/byla?", "4. Na jakim instrumencie Mozart nie gral?", "5. Kto skomponowal Toccate i fuge d-moll?",
       "6. Ktory ze znanych kompozytorow ulegl pod koniec zycia calkowitej gluchocie?", "7. W ktorym roku zmarl Fryderyk Chopin?", "8. Kiedy urodzil sie Jan Sebastian Bach?", "9. Jaki tytul ma poemat symfoniczny Jeana Sibeliusa slawiacy ojczyzne kompozytora?", "10. Kto jest autorem marsza weselnego bedacego czescia muzyki do 'Snu nocy letniej'?" };
    string odpowiedzi5[10] = { "b", "a", "b", "c", "b", "c", "b", "b", "b", "a" };
    string wybor5[10][3] = { { "A) 3 wrzesnia lub 9 sierpnia 1756 roku w Zeliwnej Woli ", "B) 22 lutego lub 1 marca 1810 roku w Zelazowej Woli", "C) 18 grudnia w 1456 roku w Czestochowie " }, { "A) Austria", "B) Niemcy", "C) Wlochy" }, { "A) Niccolo Paganini", "B) Henryk Wieniawski", "C) Ida Haendel" },
        { "A) na skrzypcach", "B) na organach", "C) na trabce", },{ "A) Wolfgang Amadeusz Mozart", "B) Jan Sebastian Bach", "C) Ludwig van Beethoven"}, { "A) C. Schubert", "B) Jan Sebastian Bach", "C) Ludwig van Beethoven"}, { "A) 1854", "B) 1849", "C) 1851"}, { "A) W 1702", "B) W 1685", "C) W 1673 "}, { "A) Germania", "B) Finlandia", "C) Moja Ojczyzna"},{ "A) Feliks Mendelssohn", "B) Ryszard Wagner", "C) Robert Schumann"} };
    


    przed_menu: 
    
    menu(); ///wyswietlanie menu programu, dzieki naglowkowi "menu.h"
    
    SetConsoleTextAttribute(kolory, 10);
    cout << setfill(' ') << setw(55) << "==========================" << endl;
    cout << setfill(' ') << setw(54) << "||CO WYBIERASZ? (1-7): " << " ";
    SetConsoleTextAttribute(kolory, 10);
    SetConsoleTextAttribute(kolory, 15);
    cin >> wybierz_quiz;
    
    if (wybierz_quiz == 7)
    {
        system("cls");
        SetConsoleTextAttribute(kolory, 12);
        cout << endl;
        cout << "DO ZOBACZENIA! ";
        cout << endl;
        SetConsoleTextAttribute(kolory, 15);
        Sleep(1000);
        return(0);
    }
   
    SetConsoleTextAttribute(kolory, 12);
    
    if (wybierz_quiz < 1 || wybierz_quiz>7)
    {
        cout << endl;
        system("cls");
        cout << setfill(' ') << setw(67)<< "-------------------------" << endl;
        cout << setfill(' ') << setw(67)<<"-BLAD! WYBRALES ZLY NUMER-"<<endl;
        cout << setfill(' ') << setw(67)<< "-------------------------" << endl;
        Sleep(2000);
        system("cls");
        goto przed_menu; /// Wracanie do menu glownego z mozliwoscia ponownego zagrania
        
    }
    
    dolosowego: 
    
    SetConsoleTextAttribute(kolory, 15);
    system("cls");
    switch (wybierz_quiz)
    {
    case 1:
    {
        cout << setfill('=') << setw(38) << "=" << endl;
        cout << "          QUIZ O MAPIE SWIATA" << endl;
        cout << setfill('=') << setw(38) << "=" << endl;
        cout << endl;
  
        time_t start = time(0);     ///Odliczanie czasu do konca quizu
        
        for (int i = 0; i < 10; i++) 
        {
            cout << pytania1[i] << endl;
            SetConsoleTextAttribute(kolory, 11);
            cout << setfill('-') << setw(30) << "-";
            SetConsoleTextAttribute(kolory, 15);
            cout << endl;
        
            for (int j = 0; j < 3; j++)
            {
                cout << wybor1[i][j] << endl;
            }
            cout << endl;
            cout << "Wpisz odpowiedz (A-C lub a-c): ";
            cin >> wyborUzytkownika;
            wyborUzytkownika = tolower(wyborUzytkownika); ///przekszta³cenie wprowadzonej przez u¿ytkownika wartoœci zmiennej "wyborUzytkownika" na ma³e litery
            
            if (wyborUzytkownika == odpowiedzi1[i][0])
            {
                SetConsoleTextAttribute(kolory, 10);
                cout << "Dobrze!" << endl;
                SetConsoleTextAttribute(kolory, 15);
                cout << endl;
                punkty++;        ///zwiekszanie ilosci punktow przy prawidlowej odpowiedzi
            }
         else 
            {
                SetConsoleTextAttribute(kolory, 12);
                cout << "Zle :( Prawidlowa odpowiedz to: " << odpowiedzi4[i] << endl;
                cout << endl;
                SetConsoleTextAttribute(kolory, 15);

            }
   }
        SetConsoleTextAttribute(kolory, 15);
        
        time_t end = time(0);    //KONIEC ODLICZANIA 
        double elapsedTime = difftime(end, start);  ///ró¿nicê miêdzy koñcowym i pocz¹tkowym czasem w sekundach
        
        cout << setfill('=') << setw(68) << "=" << endl;
        SetConsoleTextAttribute(kolory, 15);
        cout << setfill(' ') << setw(68) << "||" << endl;
        cout << "Ukonczyles quiz w czasie " << elapsedTime << " sekund. " << "|| Twoj wynik to: " << punkty << "/10 punktow ||" << endl;
        cout << setfill(' ') << setw(68) << "||" << endl;
        SetConsoleTextAttribute(kolory, 15);
        cout << setfill('=') << setw(69) << "=" << endl;
        Sleep(2000);
        cout << endl;
        SetConsoleTextAttribute(kolory, 15);
       
        cout << "Chcesz wyjsc z programu? (tak/nie): ";
        cin >> wyborCzyZamknac;
        if (wyborCzyZamknac == "tak" || wyborCzyZamknac == "Tak" || wyborCzyZamknac == "TAK") {
            cout << "Zamykanie programu..." << endl;
            cout << endl;
            return 0;
        }
        else if (wyborCzyZamknac == "nie" || wyborCzyZamknac == "Nie" || wyborCzyZamknac == "NIE") {
            SetConsoleTextAttribute(kolory, 12);
            cout << "Wracanie do menu glownego..." << endl;
            Sleep(2000);
            SetConsoleTextAttribute(kolory, 15);
            cout << endl;
            system("cls");
            goto przed_menu;

        }
        else {
            cout << endl;
            SetConsoleTextAttribute(kolory, 12);
            cout << "Nieprawidlowa odpowiedz.Zamykanie programu..." << endl;
            SetConsoleTextAttribute(kolory, 15);
            return 0;
        }

        SetConsoleTextAttribute(kolory, 15);
        system("cls");
        goto przed_menu;
    }

    break;
    
    
    case 2:
    {
       
         cout << setfill('=') << setw(38) << "=" << endl;
         cout << "          QUIZ O ZWIERZETACH" << endl;
         cout << setfill('=') << setw(38) << "=" << endl;
         cout << endl;
         
         time_t start = time(0);
         for (int i = 0; i < 10; i++)
         {
             cout << pytania2[i] << endl;
             SetConsoleTextAttribute(kolory, 11);
             cout << setfill('-') << setw(30) << "-";
             SetConsoleTextAttribute(kolory, 15);
             cout << endl;
             for (int j = 0; j < 3; j++)
             {
                 cout << wybor2[i][j] << endl;
             }
             cout << endl;
             cout << "Wpisz odpowiedz (A-C lub a-c): ";
             cin >> wyborUzytkownika;
             wyborUzytkownika = tolower(wyborUzytkownika);
             if (wyborUzytkownika == odpowiedzi2[i][0]) {
                 SetConsoleTextAttribute(kolory, 10);
                 cout << "Dobrze!" << endl;
                 SetConsoleTextAttribute(kolory, 15);
                 cout << endl;
                 punkty++;
             }
             else
             {
                 SetConsoleTextAttribute(kolory, 12);
                 cout << "Zle :( Prawidlowa odpowiedz to: " << odpowiedzi2[i] << endl;
                 cout << endl;
                 SetConsoleTextAttribute(kolory, 15);

             }


         }
         SetConsoleTextAttribute(kolory, 15);

         time_t end = time(0);
         double elapsedTime = difftime(end, start);

         cout << setfill('=') << setw(68) << "=" << endl;
         SetConsoleTextAttribute(kolory, 15);
         cout << setfill(' ') << setw(68) << "||" << endl;
         cout << "Ukonczyles quiz w czasie " << elapsedTime << " sekund. " << "|| Twoj wynik to: " << punkty << "/10 punktow ||" << endl;
         cout << setfill(' ') << setw(68) << "||" << endl;
         SetConsoleTextAttribute(kolory, 15);
         cout << setfill('=') << setw(69) << "=" << endl;
         Sleep(2000);
         cout << endl;
        SetConsoleTextAttribute(kolory, 15);
        
        cout << "Chcesz wyjsc z programu? (tak/nie): ";
        cin >> wyborCzyZamknac;
         if (wyborCzyZamknac == "tak" || wyborCzyZamknac == "Tak" || wyborCzyZamknac == "TAK") {
             cout << "Zamykanie programu..." << endl;
             cout << endl;
             return 0;
         }
         else if (wyborCzyZamknac == "nie" || wyborCzyZamknac == "Nie" || wyborCzyZamknac == "NIE") {
             SetConsoleTextAttribute(kolory, 12);
             cout << "Wracanie do menu glownego..." << endl;
             Sleep(2000);
             SetConsoleTextAttribute(kolory, 15);
             cout << endl;
             system("cls");
             goto przed_menu;

         }
         else {
             cout << endl;
             SetConsoleTextAttribute(kolory, 12);
             cout << "Nieprawidlowa odpowiedz.Zamykanie programu..." << endl;
             SetConsoleTextAttribute(kolory, 15);
             return 0;
         }

         SetConsoleTextAttribute(kolory, 15);
         system("cls");
         goto przed_menu;
     
    }
    break;
    

    case 3:
    {
        cout << setfill('=') << setw(38) << "=" << endl;
        cout << "          QUIZ O HISTORII" << endl;
        cout << setfill('=') << setw(38) << "=" << endl;
        cout << endl;

        time_t start = time(0);
        for (int i = 0; i < 10; i++)
        {
            cout << pytania3[i] << endl;
            SetConsoleTextAttribute(kolory, 11);
            cout << setfill('-') << setw(30) << "-";
            SetConsoleTextAttribute(kolory, 15);
            cout << endl;
            for (int j = 0; j < 3; j++)
            {
                cout << wybor3[i][j] << endl;
            }
            cout << endl;
            cout << "Wpisz odpowiedz (A-C lub a-c): ";
            cin >> wyborUzytkownika;
            wyborUzytkownika = tolower(wyborUzytkownika);
            if (wyborUzytkownika == odpowiedzi3[i][0]) {
                SetConsoleTextAttribute(kolory, 10);
                cout << "Dobrze!" << endl;
                SetConsoleTextAttribute(kolory, 15);
                cout << endl;
                punkty++;
            }
            else
            {
                SetConsoleTextAttribute(kolory, 12);
                cout << "Zle :( Prawidlowa odpowiedz to: " << odpowiedzi3[i] << endl;
                cout << endl;
                SetConsoleTextAttribute(kolory, 15);

            }
        }

        SetConsoleTextAttribute(kolory, 15);

        time_t end = time(0);
        double elapsedTime = difftime(end, start);

        cout << setfill('=') << setw(68) << "=" << endl;
        SetConsoleTextAttribute(kolory, 15);
        cout << setfill(' ') << setw(68) << "||" << endl;
        cout << "Ukonczyles quiz w czasie " << elapsedTime << " sekund. " << "|| Twoj wynik to: " << punkty << "/10 punktow ||" << endl;
        cout << setfill(' ') << setw(68) << "||" << endl;
        SetConsoleTextAttribute(kolory, 15);
        cout << setfill('=') << setw(69) << "=" << endl;
        Sleep(2000);
        cout << endl;
        SetConsoleTextAttribute(kolory, 15);
        
        cout << "Chcesz wyjsc z programu? (tak/nie): ";
        cin >> wyborCzyZamknac;
        if (wyborCzyZamknac == "tak" || wyborCzyZamknac == "Tak" || wyborCzyZamknac == "TAK") {
            cout << "Zamykanie programu..." << endl;
            cout << endl;
            return 0;
        }
        else if (wyborCzyZamknac == "nie" || wyborCzyZamknac == "Nie" || wyborCzyZamknac == "NIE") {
            SetConsoleTextAttribute(kolory, 12);
            cout << "Wracanie do menu glownego..." << endl;
            Sleep(2000);
            SetConsoleTextAttribute(kolory, 15);
            cout << endl;
            system("cls");
            goto przed_menu;

        }
        else {
            cout << endl;
            SetConsoleTextAttribute(kolory, 12);
            cout << "Nieprawidlowa odpowiedz.Zamykanie programu..." << endl;
            SetConsoleTextAttribute(kolory, 15);
            return 0;
        }

        SetConsoleTextAttribute(kolory, 15);
        system("cls");
        goto przed_menu;
    }
    break;
   
    case 5:
    {
        cout << setfill('=') << setw(38) << "=" << endl;
        cout << "          QUIZ O KOMPOZYTORACH" << endl;
        cout << setfill('=') << setw(38) << "=" << endl;
        cout << endl;
        
        time_t start = time(0);
        for (int i = 0; i < 10; i++)
        {
            cout << pytania5[i] << endl;
            SetConsoleTextAttribute(kolory, 11);
            cout << setfill('-') << setw(30) << "-";
            SetConsoleTextAttribute(kolory, 15);
            cout << endl;
            for (int j = 0; j < 3; j++)
            {
                cout << wybor5[i][j] << endl;
            }
            cout << endl;
            cout << "Wpisz odpowiedz (A-C lub a-c): ";
            cin >> wyborUzytkownika;
            wyborUzytkownika = tolower(wyborUzytkownika);
           
            if (wyborUzytkownika == odpowiedzi5[i][0]) {
                SetConsoleTextAttribute(kolory, 10);
                cout << "Dobrze!" << endl;
                SetConsoleTextAttribute(kolory, 15);
                cout << endl;
                punkty++;
            }
            else
            {
                SetConsoleTextAttribute(kolory, 12);
                cout << "Zle :( Prawidlowa odpowiedz to: " << odpowiedzi4[i] << endl;
                cout << endl;
                SetConsoleTextAttribute(kolory, 15);

            }
   
        
        
        }

        SetConsoleTextAttribute(kolory, 15);

        time_t end = time(0);
        double elapsedTime = difftime(end, start);

        cout << setfill('=') << setw(68) << "=" << endl;
        SetConsoleTextAttribute(kolory, 15);
        cout << setfill(' ') << setw(68) << "||" << endl;
        cout << "Ukonczyles quiz w czasie " << elapsedTime << " sekund. " << "|| Twoj wynik to: " << punkty << "/10 punktow ||" << endl;
        cout << setfill(' ') << setw(68) << "||" << endl;
        SetConsoleTextAttribute(kolory, 15);
        cout << setfill('=') << setw(69) << "=" << endl;
        Sleep(2000);
        cout << endl;
        SetConsoleTextAttribute(kolory, 15);
        cout << "Chcesz wyjsc z programu? (tak/nie): ";
        cin >> wyborCzyZamknac;
        if (wyborCzyZamknac == "tak" || wyborCzyZamknac == "Tak" || wyborCzyZamknac == "TAK") {
            cout << "Zamykanie programu..." << endl;
            cout << endl;
            return 0;
        }
        else if (wyborCzyZamknac == "nie" || wyborCzyZamknac == "Nie" || wyborCzyZamknac == "NIE") {
            SetConsoleTextAttribute(kolory, 12);
            cout << "Wracanie do menu glownego..." << endl;
            Sleep(2000);
            SetConsoleTextAttribute(kolory, 15);
            cout << endl;
            system("cls");
            goto przed_menu;

        }
        else {
            cout << endl;
            SetConsoleTextAttribute(kolory, 12);
            cout << "Nieprawidlowa odpowiedz.Zamykanie programu..." << endl;
            SetConsoleTextAttribute(kolory, 15);
            return 0;
        }

        SetConsoleTextAttribute(kolory, 15);
        system("cls");
        goto przed_menu;
    }

    break;
    case 4:
    {
        cout << setfill('=') << setw(38) << "=" << endl;
        cout << "          QUIZ O SPORCIE" << endl;
        cout << setfill('=') << setw(38) << "=" << endl;
        cout << endl;
        
        time_t start = time(0);
        for (int i = 0; i < 10; i++)
        {
            cout << pytania4[i] << endl;
            SetConsoleTextAttribute(kolory, 11);
            cout << setfill('-') << setw(30) << "-";
            SetConsoleTextAttribute(kolory, 15);
            cout << endl;
            for (int j = 0; j < 3; j++)
            {
                cout << wybor4[i][j] << endl;
            }
            cout << endl;
            cout << "Wpisz odpowiedz (A-C lub a-c): ";
            cin >> wyborUzytkownika;
            wyborUzytkownika = tolower(wyborUzytkownika);
            if (wyborUzytkownika == odpowiedzi4[i][0]) {
                SetConsoleTextAttribute(kolory, 10);
                cout << "Dobrze!" << endl;
                SetConsoleTextAttribute(kolory, 15);
                cout << endl;
                punkty++;
            }
            else
            {
                SetConsoleTextAttribute(kolory, 12);
                cout << "Zle :( Prawidlowa odpowiedz to: " << odpowiedzi4[i] << endl;
                cout << endl;
                SetConsoleTextAttribute(kolory, 15);

            }
        }

        SetConsoleTextAttribute(kolory, 15);

        time_t end = time(0);
        double elapsedTime = difftime(end, start);

        cout << setfill('=') << setw(68) << "=" << endl;
        SetConsoleTextAttribute(kolory, 15);
        cout << setfill(' ') << setw(68) << "||" << endl;
        cout << "Ukonczyles quiz w czasie " << elapsedTime << " sekund. " << "|| Twoj wynik to: " << punkty << "/10 punktow ||" << endl;
        cout << setfill(' ') << setw(68) << "||" << endl;
        SetConsoleTextAttribute(kolory, 15);
        cout << setfill('=') << setw(69) << "=" << endl;
        Sleep(2000);
        cout << endl;
        SetConsoleTextAttribute(kolory, 15);

        cout << "Chcesz wyjsc z programu? (tak/nie): ";
        cin >> wyborCzyZamknac;
        SetConsoleTextAttribute(kolory, 12);
        if (wyborCzyZamknac == "tak" || wyborCzyZamknac == "Tak" || wyborCzyZamknac == "TAK") {
            cout << "Zamykanie programu..." << endl;
            cout << endl;
            return 0;
        }
        else if (wyborCzyZamknac == "nie" || wyborCzyZamknac == "Nie" || wyborCzyZamknac == "NIE") {
            SetConsoleTextAttribute(kolory, 12);
            cout << "Wracanie do menu glownego..." << endl;
            Sleep(2000);
            SetConsoleTextAttribute(kolory, 15);
            cout << endl;
            system("cls");
            goto przed_menu;

        }
        else 
        {
            cout << endl;
            SetConsoleTextAttribute(kolory, 12);
            cout << "Nieprawidlowa odpowiedz.Zamykanie programu..." << endl;
            SetConsoleTextAttribute(kolory, 15);
            return 0;
        }

        SetConsoleTextAttribute(kolory, 15);
        system("cls");
        goto przed_menu;
    }

    break;

    case 6:
    {

        srand(time(NULL));  ///generator liczb losowych
        wybierz_quiz = rand() % 5 + 1;  ///generuje losow¹ liczbê ca³kowit¹ od 1 do 5
        
        SetConsoleTextAttribute(kolory, 9);
        cout << setfill('=') << setw(23) << "=" << endl;
        SetConsoleTextAttribute(kolory, 15);
        cout << "WYLOSOWALES QUIZ NR " << wybierz_quiz <<"!"<< endl;
        SetConsoleTextAttribute(kolory, 9);
        cout << setfill('=') << setw(23) << "=" << endl;
        SetConsoleTextAttribute(kolory, 15);
        Sleep(1000);
        system("pause");
       
        goto dolosowego;  ///przeskakiwanie do innej czêœci programu (przed switchem)
    }
    break;
   
     }



    }




                  
                  
              
                
                
                
                
                
                
                
                
                
                
                
                
                
              
            
                
                
                
              
          
   
   



  
  
