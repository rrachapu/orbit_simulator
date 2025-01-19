// include/Subject.h
#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <Eigen/Dense>
#include <string>

class Subject {
public:
    std::string name;
    Eigen::VectorXd position;

    Subject(const std::string& subjectName, const Eigen::VectorXd& pos);
    virtual ~Subject() = default;

    void setPosition(const Eigen::VectorXd& newPos);
    Eigen::VectorXd getPosition() const;
    virtual void printPosition() const;
};

#endif // SUBJECT_H
