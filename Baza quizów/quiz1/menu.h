#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <windows.h>



/// Tworzenie MENU oraz zmienianie jego kolorystyki


    using namespace std;
    void menu() 
    {
    HANDLE kolory;
    int wybierz_quiz=0;

   
    kolory = GetStdHandle(STD_OUTPUT_HANDLE);
   
    SetConsoleTextAttribute(kolory, 6);
    cout << setfill('*') << setw(90) << "*" << endl;
    SetConsoleTextAttribute(kolory, 13);
    cout << setfill(' ') << setw(25) << " " << "W i t a j   w   b a z i e   q u i z o w ! " << endl;
    SetConsoleTextAttribute(kolory, 6);
    cout << setfill('*') << setw(90) << "*" << endl;
    SetConsoleTextAttribute(kolory, FOREGROUND_GREEN);

    Sleep(300);
    cout << setfill(' ') << setw(38) << "= M ";
    Sleep(300);
    cout << setfill(' ') << setw(0) << " E ";
    Sleep(300);
    cout << setfill(' ') << setw(0) << " N ";
    Sleep(300);
    cout << setfill(' ') << setw(0) << " U =" << endl;
    cout << setfill(' ') << setw(23) << " ";
    SetConsoleTextAttribute(kolory, 6);
    cout << setfill('*') << setw(38) << "*" << endl;
   

    Sleep(600);
    SetConsoleTextAttribute(kolory, 15);
    cout << setfill('_') << setw(90) << "_________________________" << endl;
    cout << endl;
    cout << setfill(' ') << setw(55) << "|   1. MAPA SWIATA       |" << endl;
    cout << setfill(' ') << setw(34) << "    |" << endl;
    
    Sleep(600);
    cout << setfill(' ') << setw(55) << "|   2. ZWIERZETA         |" << endl;
    cout << setfill(' ') << setw(34) << "    |" << endl;
    
    Sleep(600);
    cout << setfill(' ') << setw(55) << "|   3. HISTORIA          |" << endl;
    cout << setfill(' ') << setw(34) << "    |" << endl;
    
    Sleep(600);
    cout << setfill(' ') << setw(55) << "|   4. SPORT             |" << endl;
    cout << setfill(' ') << setw(34) << "    |" << endl;
   
    Sleep(600);
    cout << setfill(' ') << setw(55) << "|   5. KOMPOZYTORZY      |" << endl;
    cout << setfill(' ') << setw(34) << "    |" << endl;
    
    Sleep(600);
    cout << setfill(' ') << setw(55) << "|   6. LOSOWY QUIZ       |" << endl;
    cout << setfill(' ') << setw(34) << "    |" << endl;
    
    Sleep(600);
    cout << setfill(' ') << setw(55) << "|   7. ZAKONCZ PROGRAM   |"<<endl;
    cout << setfill('_') << setw(90) << "_________________________"<<endl;
    cout << endl;
    Sleep(600);

   
    

}
   