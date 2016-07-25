#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void drive(int left, int right)
{
	motor[motorB] = left;
	motor[motorC] = right;
}

task main()
{
	for (int i = 0; i < 16; i++) {
		drive(30, 30);
		delay(1600);
		drive(0, 0);
		drive(50, -50);
		delay(436.4);
	}

}