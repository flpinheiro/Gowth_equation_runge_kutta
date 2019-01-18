/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: flpin
 *
 * Created on 18 de Janeiro de 2019, 10:21
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include "Growth.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    double m = 0.1, time = 0;;
    Growth animal;// = new Growth::Growth();
    ofstream file;
    file.open("out.txt");
    
    for(int i = 0 ;  i < 10000 ; i++){
        animal.RK4(&time, &m, 0.01);
        cout << time << "  " << m << endl;
        file << time << "  " << m << endl;
    }
    
    system("gnuplot 'gnuplot.plt'");
    file.close();
    return 0;
}

