// src/Subject.cpp
#include "../include/Subject.h"

Subject::Subject(const std::string& subjectName, const Eigen::VectorXd& pos)
    : name(subjectName), position(pos) {}

void Subject::setPosition(const Eigen::VectorXd& newPos) {
    position = newPos;
}

Eigen::VectorXd Subject::getPosition() const {
    return position;
}

void Subject::printPosition() const {
    std::cout << "Position of " << name << ": " << position.transpose() << std::endl;
}
