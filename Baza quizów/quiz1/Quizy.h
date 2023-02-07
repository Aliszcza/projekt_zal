#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <iomanip>
#include <windows.h>
#include<stdlib.h>

using namespace std;
void quizy()
{
    int wybierz_quiz{};
    char odpowiedz;
    int punkty{};

    HANDLE kolory;
    kolory = GetStdHandle(STD_OUTPUT_HANDLE);

    switch (wybierz_quiz)
    {
    case 1:
        break;
    case 2:
        cout << "WYBRALES QUIZ O ZWIERZETACH" << endl;
        SetConsoleTextAttribute(kolory, 11);
        cout << setfill('=') << setw(28) << "=" << endl;
        SetConsoleTextAttribute(kolory, 15);
        cout << "==1. Ktore z tych zwierzat maja wibrysy?" << endl;
        cout << endl;
        cout << "A. Gryzonie i koty" << endl;
        cout << "B. Wszystkie kregowce" << endl;
        cout << "C. Zadne z powyzszych" << endl;
        cout << endl;
        cout << "TWOJA ODPOWIEDZ TO: " << endl;
        cin >> odpowiedz;
        if (odpowiedz == 'A' || odpowiedz == 'a')
        {
            SetConsoleTextAttribute(kolory, FOREGROUND_GREEN);
            cout << "BRAWO, ZDOBYWASZ 1 PKT" << endl;
            punkty++;
        }
        else
        {
            SetConsoleTextAttribute(kolory, 12);
            cout << "zla odpowiedz :(" << endl;
            Sleep(500);
            cout << "prawidlowa odpowiedz to A" << endl;
            Sleep(1000);
        }
        SetConsoleTextAttribute(kolory, 15);
        cout << "==2. Jak nazywa sie barwnik wytwarzany przez matwy?" << endl;
        cout << endl;
        cout << "A. Indygo" << endl;
        cout << "B. Ochra" << endl;
        cout << "C. Sepia" << endl;
        cout << endl;
        cout << "TWOJA ODPOWIEDZ TO: " << endl;
        cin >> odpowiedz;
        if (odpowiedz == 'C' || odpowiedz == 'c')
        {
            SetConsoleTextAttribute(kolory, FOREGROUND_GREEN);
            cout << "BRAWO, ZDOBYWASZ 1 PKT" << endl;
            punkty++;
        }
        else
        {
            SetConsoleTextAttribute(kolory, 12);
            cout << "zla odpowiedz :(" << endl;
            Sleep(500);
            cout << "prawidlowa odpowiedz to C" << endl;
            Sleep(1000);
        }
        SetConsoleTextAttribute(kolory, 15);
        cout << "==3. Zwierzeciem wymarlym jest: " << endl;
        cout << endl;
        cout << "A. tur" << endl;
        cout << "B. jak" << endl;
        cout << "C. ry¿owiec siwy" << endl;
        cout << endl;
        cout << "TWOJA ODPOWIEDZ TO: " << endl;
        cin >> odpowiedz;
        if (odpowiedz == 'A' || odpowiedz == 'a')
        {
            SetConsoleTextAttribute(kolory, FOREGROUND_GREEN);
            cout << "BRAWO, ZDOBYWASZ 1 PKT" << endl;
            punkty++;
        }
        else
        {
            SetConsoleTextAttribute(kolory, 12);
            cout << "zla odpowiedz :(" << endl;
            Sleep(500);
            cout << "prawidlowa odpowiedz to A" << endl;
            Sleep(1000);
        }
        SetConsoleTextAttribute(kolory, 15);
        cout << "==4. Gawra to :" << endl;
        cout << endl;
        cout << "A. samica ³osia" << endl;
        cout << "B. legowisko niedŸwiedzia" << endl;
        cout << "C. okres godowy rysi" << endl;
        cout << endl;
        cout << "TWOJA ODPOWIEDZ TO: " << endl;
        cin >> odpowiedz;
        if (odpowiedz == 'B' || odpowiedz == 'b')
        {
            SetConsoleTextAttribute(kolory, FOREGROUND_GREEN);
            cout << "BRAWO, ZDOBYWASZ 1 PKT" << endl;
            punkty++;
        }
        else
        {
            SetConsoleTextAttribute(kolory, 12);
            cout << "zla odpowiedz :(" << endl;
            Sleep(500);
            cout << "prawidlowa odpowiedz to A" << endl;
            Sleep(1000);
        }
        SetConsoleTextAttribute(kolory, 15);
        SetConsoleTextAttribute(kolory, FOREGROUND_GREEN);
        cout << endl;
        cout << "Otrzymales: " << punkty << "/4 punky";
        Sleep(4000);
        SetConsoleTextAttribute(kolory, 15);
    }
}