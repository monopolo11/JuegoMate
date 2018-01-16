//
//  main.cpp
//  Mate_Juego_Completo
//
//  Created by bernardo ruiz on 3/23/15.
//  Copyright (c) 2015 bernardo ruiz. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <unistd.h>


using namespace std;

void ClearScreen()
{
    cout << string( 100, '\n' );
}

int main();

int FDJ()
{
cout << "\nFin del Juego\n";
return 0;
}

void uvscpu()
{
    int juegoFin;
    float cpuNumber;
    float PlayerGuess;
    int Vidas;
    Vidas = 3;
    juegoFin = 0;
    srand(time(NULL));
    cpuNumber = 0;
    cpuNumber = rand() % 10 + 1;
    //cout << cpuNumber << " (Numero de la computadora)"; //esto hace visible el numero de la computadora
    cout << "\nIntroduce tu prediccion: ";
    while (PlayerGuess!=cpuNumber) {cin >> PlayerGuess;
        if(PlayerGuess<cpuNumber){
            cout << "Tus vidas:" << Vidas << "\nTu numero es muy bajo \nIntroduce otro: " ||
            cin >> PlayerGuess;
            Vidas --;
        }
        if(PlayerGuess>cpuNumber){
                cout << "Tus vidas:"  << Vidas << "\nTu numero es muy alto \nIntroduce otro: " ||
                cin >> PlayerGuess;
                Vidas --;
        }
        if(Vidas==0){
                cout << "\nHaz perdido";
                cout << "\nQuieres regresar al menu: \n1)Si\n2)No\n:";
                cin >> juegoFin;
                if(juegoFin == 1) {ClearScreen; main();}
                if(juegoFin == 2) {FDJ();}
        }
    }
    ClearScreen();
    cout << "Ganaste!";
}

void cpuvsu()
{
    float playerNumber;
    float cpuGuess;
    int m;
    int Vidas;
    int randMax;
    int randMin;
    int JF;
    Vidas =3;
    randMax = 10;
    randMin = 1;
    srand(time(NULL));
    cout << "Piense un numero del 1 - 10 e introduzcalo: ";
    cin >> playerNumber;
    if(playerNumber > 10){cout << "\nTu numero es muy grande.\nIntriduce otro numero: "; cin >> playerNumber;}
    cpuGuess = rand() % 10 + 1;
    while(cpuGuess != playerNumber){
        if(cpuGuess != playerNumber){
            ClearScreen();
            cout << "\nSu numero es: " << playerNumber << "\n";
            cout << "\nTienes" << Vidas << "\nEl intento de la computadora es: " << cpuGuess << "\nSu numero es mayor o menor?\n0) menor\n1) mayor\n3) reiniciar\n:";
            //cout << randMax << " " << randMin;
            cin >> m;
            cpuGuess =rand() % randMax + randMin;
            Vidas --;
            if(Vidas==0){
                cout << "\nHaz perdido";
                cout << "\nQuieres regresar al menu: \n1)Si\n2)No\n:";
                cin >> JF;
                if(JF == 1) {ClearScreen; main();}
                if(JF == 2) {FDJ();}
        }
        if(m == 1) randMin++;
        if(m == 0) randMax --;
        if(m == 3) {randMax = 10;randMin = 1; ClearScreen(); cout << "\nSu numero es: " << playerNumber << "\n";}
    }
    ClearScreen();
    cout << "Gano la computadora!!\n";
    cout << "Tu numero era " << playerNumber;
}
}

int main()
{
    int juegoFinalizado;
    int mdj;
    juegoFinalizado = 0;
    ClearScreen();
    cout << "En cada juego tendras 3 vidas";
    cout << "\nElige un modo de juego: \n1) Usuario Vs. CPU\n2) CPU Vs. Usuario\n:";
    cin >> mdj;
    if(mdj == 1){
        ClearScreen();
        cout << "\nLa computadora Generara un numero y tu intentaras adivinarlo (1 - 10)";
        uvscpu();
        cout << "\nQuieres regresar al menu: \n1)Si\n2)No\n:";
        cin >> juegoFinalizado;
        if(juegoFinalizado == 1) {ClearScreen; main();}
        if(juegoFinalizado == 2) {FDJ();}
    }
    else {
        cpuvsu();
        cout << "\nQuieres regresar al menu: \n1)Si\n2)No\n:";
        cin >> juegoFinalizado;
        if(juegoFinalizado == 1) {ClearScreen; main();}
        if(juegoFinalizado == 2) {FDJ();}
    }

}
