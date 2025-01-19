// src/Planet.cpp
#include "../include/Planet.h"

// Constructor
Planet::Planet(const std::string& planetName, const Eigen::VectorXd& pos, double planetMass)
    : Subject(planetName, pos), mass(planetMass) {}

// Get the mass of the planet
double Planet::getMass() const {
    return mass;
}

// Set a new mass for the planet
void Planet::setMass(double newMass) {
    mass = newMass;
}

// Override printPosition to include the mass
void Planet::printPosition() const {
    std::cout << "Position of planet " << name << ": " << position.transpose()
              << ", Mass: " << mass << " kg" << std::endl;
}
