// include/Planet.h
#ifndef PLANET_H
#define PLANET_H

#include "Subject.h"

class Planet : public Subject {
public:
    double mass; // New attribute specific to Planet

    // Constructor
    Planet(const std::string& planetName, const Eigen::VectorXd& pos, double planetMass);

    // New methods
    double getMass() const;
    void setMass(double newMass);

    // Override printPosition to include mass
    void printPosition() const override;
};

#endif // PLANET_H
