#include "AutonomousCommand1.h"
#include "RollersIn.h"
#include "RollersLeft.h"
#include "DriveForward250.h"
#include "ElevatorUp.h"
#include "ElevatorDown.h"
#include "Turn90Clockwise.h"
#include "DriveForward1000.h"
#include "DriveForward750.h"
#include "DriveForward100.h"
#include "DriveBackward250.h"
#include "DriveBackward100.h"
#include "Turn60CounterClockwise.h"
#include "Turn30CounterClockwise.h"

AutonomousCommand2::AutonomousCommand2() {
	/* This is the can thing that works. Don't delete
	AddParallel(new DriveForward250());
	AddSequential(new RollersIn());
	AddSequential(new DriveForward250());
	AddSequential(new ElevatorUp());
	AddSequential(new DriveForward1000());
	AddSequential(new DriveForward250());
	*/

	AddSequential(new DriveForward750());

}
