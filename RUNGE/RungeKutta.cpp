/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Runge.cpp
 * Author: flpin
 * 
 * Created on 18 de Janeiro de 2019, 10:22
 */

#include "RungeKutta.h"

RungeKutta::RungeKutta() {
}

RungeKutta::RungeKutta(const RungeKutta& orig) {
}

RungeKutta::~RungeKutta() {
}

double RungeKutta::RK4(double * x0, double * y0, double h) {
    double k1, k2, k3, k4, k5;

    // Apply Runge Kutta Formulas to find 
    // next value of y 
    k1 = h * function(*x0, *y0);
    k2 = h * function(*x0 + 0.5 * h, *y0 + 0.5 * k1);
    k3 = h * function(*x0 + 0.5 * h, *y0 + 0.5 * k2);
    k4 = h * function(*x0 + h, *y0 + k3);

    // Update next value of y 
    *y0 += (1.0 / 6.0)*(k1 + 2 * k2 + 2 * k3 + k4);

    // Update next value of x 
    *x0 += h;

    return *y0;
}

