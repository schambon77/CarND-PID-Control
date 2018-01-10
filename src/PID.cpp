#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double kp, double ki, double kd) {
	Kp = kp;
	Ki = ki;
	Kd = kd;
	p_error = 0.0;
	i_error = 0.0;
	d_error = 0.0;
}

void PID::UpdateError(double cte) {
	d_error = Kd*(cte - (p_error/Kp));
	p_error = Kp*cte;
	i_error += Ki*cte;
}

double PID::TotalError() {
	return p_error + i_error + d_error;
}

