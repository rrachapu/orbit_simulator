// include/ForceModel.h
#ifndef FORCEMODEL_H
#define FORCEMODEL_H

#include <iostream>
#include <Eigen/Dense>
#include <string>

class ForceModel {
public:
    std::string name;
    Eigen::VectorXd position;

    ForceModel(const std::string& forceModelName);

    virtual ~ForceModel() = default;

    Eigen::VectorXd diff_eq(const Eigen::VectorXd& input) const;
    // void setPosition(const Eigen::VectorXd& newPos);
    // Eigen::VectorXd getPosition() const;
    // virtual void printPosition() const;
};

#endif // SUBJECT_H
