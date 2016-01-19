#include "AutonomousCommand.h"
//Empty method
AutonomousCommand::AutonomousCommand() {}
//Empty method
void AutonomousCommand::Initialize() {}
// Empty method
void AutonomousCommand::Execute() { }

bool AutonomousCommand::IsFinished() {
	return false; //the autonomous command should never finish on its own
}
//Empty method
void AutonomousCommand::End() {}
//Empty method
void AutonomousCommand::Interrupted() {}
