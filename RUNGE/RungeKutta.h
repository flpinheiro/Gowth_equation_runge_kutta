/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Runge.h
 * Author: flpin
 *
 * Created on 18 de Janeiro de 2019, 10:22
 */

#ifndef RUNGE_H
#define RUNGE_H

class RungeKutta {
public:
    RungeKutta();
    RungeKutta(const RungeKutta& orig);
    virtual ~RungeKutta();
    virtual double function(double x, double y) = 0;
    
    /**
     * Function RK$: its a runge-kutta 4th order function modified from 
     * https://www.geeksforgeeks.org/runge-kutta-4th-order-method-solve-differential-equation/
     * on this funcftion is made a simple step of the runge-kutta solution. 
     * @param x0
     * @param y0
     * @param h
     * @return 
     */
    double RK4(double * x0, double * y0, double h);
private:

};

#endif /* RUNGE_H */

