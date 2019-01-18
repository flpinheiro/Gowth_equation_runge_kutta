/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GrowthCos.h
 * Author: flpin
 *
 * Created on 18 de Janeiro de 2019, 12:15
 */

#ifndef GROWTHCOS_H
#define GROWTHCOS_H
#include "Growth.h"

class GrowthCos : public Growth{
public:
    GrowthCos();
    GrowthCos(const GrowthCos& orig);
    virtual ~GrowthCos();
    double function(double x, double y);
private:
    double epsilon , omega;
};

#endif /* GROWTHCOS_H */

