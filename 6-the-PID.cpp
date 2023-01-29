#define KP x
#define KI y
#define KD z
#define SETPOINT aa

double pid_output;
double error;
double prev_error;
double integral;
double derivative;

void setup() {
    //Initialize variables
    pid_output = 0;
    error = 0;
    prev_error = 0;
    integral = 0;
    derivative = 0;
}

void loop() {
    //Read process variable
    double process_variable = analogRead(0);
    //Calculate error
    error = SETPOINT - process_variable;
    //Calculate integral
    integral += error;
    //Calculate derivative
    derivative = error - prev_error;
    //Calculate PID output
    pid_output = KP * error + KI * integral + KD * derivative;
    //Constrain PID output
    pid_output = constrain(pid_output, 0, 255);
    //Send output to actuator
    analogWrite(3, pid_output);
    //Save error for next iteration
    prev_error = error;
}

//Use below if only need PI
//double Kp = ...; // Proportional gain
//double Ki = ...; // Integral gain
//double setpoint = ...; // Desired set point
//double process_variable = ...; // Current process variable
//double error;
//double integral = 0;
//double output;

//void loop() {
  //error = setpoint - process_variable;
  //integral += error * dt; // dt is the elapsed time since the last update
  //output = Kp * error + Ki * integral;
  // Use 'output' to drive the process
}
