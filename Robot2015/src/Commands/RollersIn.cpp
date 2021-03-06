// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RollersIn.h"

RollersIn::RollersIn() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::pickerUpper);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void RollersIn::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RollersIn::Execute() {
	Robot::pickerUpper->rollerDrive->ArcadeDrive(-1, 0, false);
}

// Make this return true when this Command no longer needs to run execute()
bool RollersIn::IsFinished() {
	return Robot::pickerUpper->IRSensingIn() && !(Robot::oi->getJoystickOperator()->GetRawButton(4)) && !(Robot::oi->getJoystickOperator()->GetRawButton(5));
}

// Called once after isFinished returns true
void RollersIn::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RollersIn::Interrupted() {

}
