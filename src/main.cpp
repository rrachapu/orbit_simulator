// Add the following to the include path in vscode:

//                 "/opt/homebrew/include/eigen3",
//                 "include/"

#include "../include/Subject.h"

int main() {
    // Create an Eigen vector for position
    Eigen::VectorXd initialPosition(2);
    initialPosition << 1.0, 2.0;

    // Create a Subject instance
    Subject subject("ExampleSubject", initialPosition);

    // Print the initial position
    subject.printPosition();

    // Update the position
    Eigen::VectorXd newPosition(2);
    newPosition << 3.0, 4.0;
    subject.setPosition(newPosition);

    // Print the updated position
    subject.printPosition();

    return 0;
}
