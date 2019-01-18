/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Growth.h
 * Author: flpin
 *
 * Created on 18 de Janeiro de 2019, 10:42
 */

#ifndef GROWTH_H
#define GROWTH_H
#include <fstream>
#include "RungeKutta.h"

using namespace std;

class Growth : public RungeKutta {
public:
    Growth();
    Growth(const Growth& orig);
    virtual ~Growth();
    double function(double x, double y);
private:
    double a, b, alpha;
};

#endif /* GROWTH_H */

