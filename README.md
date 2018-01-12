# CarND-Controls-PID Project

Self-Driving Car Engineer Nanodegree Program

## Project Objectives

In this project, a PID controller is implemented in C++ to maneuver the vehicle around the Udacity simlator track!

The simulator provides the cross track error (CTE) and the velocity (mph) in order to compute the appropriate steering angle.

## Project Files

* [Source code](https://github.com/schambon77/CarND-PID-Control/tree/master/src)
* [ReadMe](https://github.com/schambon77/CarND-PID-Control/blob/master/README.md)

## Project Rubric Points

Rubric points are found [here](https://review.udacity.com/#!/rubrics/824/view).

### Compilation

The code compiles without errors with cmake and make.

### Implementation

The PID procedure follows what was taught in the lessons.

In particular, the `PID` class provides the methods:
* `void Init(double Kp, double Ki, double Kd)`: initializes the member variables: controller gains from input arguments, and all residual errors to zero.
* `void UpdateError(double cte)`: P, I and D residual errors are updated with the cross track error `cte` and the controller gains following equations taught in the class. 
* `double TotalError()`: returns the total residual error (sum of the P, I and D residual errors).

2 PID controllers are used in the implementation:
* one for the steering angle
* and one for the brake action

### Reflection

Here is a brief description of the effect each of the P, I, D components has in the implementation:
* P: controls how much steering or brake action is applied; the bigger the error, the bigger the steering angle and brake
* D: defines the smoothness of the controller; reduces the overshoot and oscillations effects.
* I: acts against potential drift, in particular at the end of a curve when the car is far from the center of the road.

Here is a [video](https://github.com/schambon77/CarND-PID-Control/blob/master/video.mp4) recording of the controller in action.

The final hyperparameters were chosen through manual tuning.

### Simulation

The vehicle successfully can safely drive a lap around the track.




