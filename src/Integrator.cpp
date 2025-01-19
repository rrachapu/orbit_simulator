// src/Integrator.cpp
#include "../include/Integrator.h"

Integrator::Integrator(const std::string& integratorName)
    : name(integratorName) 
{

}

Eigen::VectorXd ode45(const int numel, Eigen::VectorXd x_start, double t1, double t2, double eps, 
        double dt1, double dt_min, Eigen::VectorXd (*func)(const Eigen::VectorXd&), const Eigen::VectorXd& params) 
{

}

Eigen::VectorXd stepper45(const int numel, Eigen::VectorXd x, Eigen::VectorXd dxdt, double t, 
        double dt_try, double eps, Eigen::VectorXd (*func)(const Eigen::VectorXd&), const Eigen::VectorXd& params)
{

}

Eigen::VectorXd rk45(const int numel, Eigen::VectorXd x, Eigen::VectorXd dxdt, double t, 
        double dt, Eigen::VectorXd (*func)(double t, const Eigen::VectorXd&, const Eigen::VectorXd&), const Eigen::VectorXd& params) 
{
    double a2 = 0.2;
    double a4 = 0.6;
    double a5 = 1.0;
    double a6 = 0.875;
    double a3 = 0.3;
    double b21 = 0.2;
    double b31 = 3.0/40.0;
    double b32 = 9.0/40.0;
    double b41 = 0.3;
    double b42 = -0.9;
    double b43 = 1.2;
    double b51 = -11.0/54.0;
    double b52 = 2.5;
    double b53 = -70.0/27.0;
    double b54 = 35.0/27.0;
    double b61 = 1631.0/55296.0;
    double b62 = 175.0/512.0;
    double b63 = 575.0/13824.0;
    double b64 = 44275.0/110592.0;
    double b65 = 253.0/4096.0;
    double c1 = 37.0/378.0;
    double c3 = 250.0/621.0;
    double c4 = 125.0/594.0;
    double c6 = 512.0/1771.0;
    double dc5 = -277.0/14336.0;
    double dc1 = c1-2825.0/27648.0;
    double dc3 = c3-18575.0/48384.0;
    double dc4 = c4-13525.0/55296.0;
    double dc6 = c6-0.25;

    Eigen::VectorXd ak2 = Eigen::VectorXd::Zero(numel);
    Eigen::VectorXd ak2 = Eigen::VectorXd::Zero(numel); 
    Eigen::VectorXd ak3 = Eigen::VectorXd::Zero(numel); 
    Eigen::VectorXd ak4 = Eigen::VectorXd::Zero(numel); 
    Eigen::VectorXd ak5 = Eigen::VectorXd::Zero(numel); 
    Eigen::VectorXd ak6 = Eigen::VectorXd::Zero(numel); 
    Eigen::VectorXd x_temp = Eigen::VectorXd::Zero(numel); 
    
    x_temp = x + b21*dt*dxdt

    ak2 = func(t + a2*dt, x_temp, props)

    x_temp = x + dt*b31*dxdt + b32*ak2
    
    ak3 = foo(t+a3*dt, x_temp, props)
        
    x_temp = x + dt*b41*dxdt + b42*ak2 + b43*ak3
    
    ak4 = foo(t+a4*dt,x_temp, props)

    x_temp = x + dt*b51*dxdt + b52*ak2 + b53*ak3 + b54*ak4
    
    ak5 = foo(t+a5*dt,x_temp, props)

    x_temp = x + dt*b61*dxdt + b62*ak2 + b63*ak3 + b64*ak4 + b65*ak5
    
    ak6 = foo(t + a6 * dt, x_temp, props)
    
    y = (x) + dt*(c1*(dxdt) + c3*(ak3) + c4*(ak4) + c6*(ak6))
    
    y_err = dt*(dc1*(dxdt) + dc3*(ak3) + dc4*(ak4) + dc5*(ak5) + dc6*(ak6))

    # returns predicted value at (t + dt)
    # returns predicted error for this value
    return [y, y_err]
}


