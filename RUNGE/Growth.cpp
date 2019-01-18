/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Growth.cpp
 * Author: flpin
 * 
 * Created on 18 de Janeiro de 2019, 10:42
 */

#include "RungeKutta.h"
#include "Growth.h"
#include <math.h>

Growth::Growth() {
    Growth::a = 1;
    Growth::b = 1;
    Growth::alpha = (double) 3 / (double) 4;
}

Growth::Growth(const Growth& orig) {
}

Growth::~Growth() {
}

double Growth::function(double x, double y) {
    return Growth::a * pow(y, Growth::alpha) - Growth::b * y;
}
