// src/ForceModel.cpp
#include "../include/ForceModel.h"

ForceModel::ForceModel(const std::string& ForceModelName)
    : name(ForceModelName) {}

Eigen::VectorXd ForceModel::diff_eq(const Eigen::VectorXd& input) const {
    Eigen::VectorXd output = input;
    output*=0;
    return output;
}
