#include "AutonomousCommand0.h"
#include "DriveForward250.h"
#include "DriveForward100.h"
#include "RollersIn.h"
#include "ElevatorUp.h"
#include "Turn45Clockwise.h"

AutonomousCommand0::AutonomousCommand0() {

	// Drives forward 250 while turning rollers on inward, which picks up the recycling can
	AddParallel(new DriveForward250());
	AddSequential(new RollersIn());

	//Elevator is raised up while driving forward 100
	AddParallel(new ElevatorUp());
	AddSequential(new DriveForward100());

	//The robot now turms 45 degrees, causing it to face the human player station, ready to begin tele-op
	AddSequential(new Turn45Clockwise());

}
