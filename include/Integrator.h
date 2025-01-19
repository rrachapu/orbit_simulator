// include/ForceModel.h
#ifndef INTEGRATOR_H
#define INTEGRATOR_H

#include <iostream>
#include <Eigen/Dense>
#include <string>

class Integrator {
public:
    std::string name;

    Integrator(const std::string& Integrator);

    virtual ~Integrator() = default;
    Eigen::VectorXd ode45(const int numel, Eigen::VectorXd x_start, double t1, double t2, double eps, 
        double dt1, double dt_min, Eigen::VectorXd (*func)(const Eigen::VectorXd&), const Eigen::VectorXd& params);

private:
    Eigen::VectorXd stepper45(const int numel, Eigen::VectorXd x, Eigen::VectorXd dxdt, double t, 
        double dt_try, double eps, Eigen::VectorXd (*func)(const Eigen::VectorXd&), const Eigen::VectorXd& params);

    Eigen::VectorXd rk45(const int numel, Eigen::VectorXd x, Eigen::VectorXd dxdt, double t, 
        double dt, Eigen::VectorXd (*func)(const Eigen::VectorXd&), const Eigen::VectorXd& params);

};

#endif // INTEGRATOR_H
