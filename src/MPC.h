#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;


// Class to store predicted model values
class Model
{
  public:

    Model();

    double steer;
    double throttle;
    vector<double> mpc_x_vals;
    vector<double> mpc_y_vals;
};

class MPC {
 public:

  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
 Model Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);
};

#endif /* MPC_H */
