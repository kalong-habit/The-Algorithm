// Function to move the machine to a target position
void moveToPosition(float targetPosition) {
  // Initialize variables
  float currentPosition = getCurrentPosition();
  float distance = targetPosition - currentPosition;
  float maxSpeed = getMaxSpeed();
  float acceleration = getAcceleration();
  float startSpeed = 0;
  float endSpeed = 0;

  // Calculate the time for each phase
  float accelTime = maxSpeed / acceleration;
  float constSpeedTime = distance / maxSpeed;
  float decelTime = maxSpeed / acceleration;

  // Acceleration phase
  for (float t = 0; t < accelTime; t += dt) {
    float speed = acceleration * t;
    setSpeed(speed);
    updatePosition(speed, dt);
  }

  // Constant speed phase
  for (float t = 0; t < constSpeedTime; t += dt) {
    setSpeed(maxSpeed);
    updatePosition(maxSpeed, dt);
  }

  // Deceleration phase
  for (float t = 0; t < decelTime; t += dt) {
    float speed = maxSpeed - acceleration * t;
    setSpeed(speed);
    updatePosition(speed, dt);
  }
}
