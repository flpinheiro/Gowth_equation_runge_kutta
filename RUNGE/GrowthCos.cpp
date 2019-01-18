/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GrowthCos.cpp
 * Author: flpin
 * 
 * Created on 18 de Janeiro de 2019, 12:15
 */

#include "GrowthCos.h"
#include <math.h>

GrowthCos::GrowthCos() {
    epsilon = 0.2;
    omega = 1;
}

GrowthCos::GrowthCos(const GrowthCos& orig) {
}

GrowthCos::~GrowthCos() {
}

double GrowthCos::function(double x, double y){
    return Growth::function(x,y) + GrowthCos::epsilon * cos(GrowthCos::omega * x);
}