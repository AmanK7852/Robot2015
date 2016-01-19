#include "AutonomousCommand3.h"
#include "RollersIn.h"
#include "DriveForward250.h"
#include "DriveBackward1000.h"
#include "ElevatorUp.h"
#include "Turn90CounterClockwise.h"
#include "DriveForward100.h"

AutonomousCommand3::AutonomousCommand3() {
	//Working 1 bin autonomous; don't delete
	//This commented out code makes the robot move a recycling bin to the auto zone, uncomment if useful.
	/*
	AddParallel(new DriveForward250());
	AddSequential(new RollersIn());
	AddParallel(new DriveForward250());
	AddSequential(new ElevatorUp());
	AddSequential(new Turn90CounterClockwise());
	AddSequential(new DriveForward750());
	*/

	//This is REALLY tentative.
	//TODO Lot of testing
	/*
	AddParallel(new RollersIn());
	AddSequential(new DriveForward250());
	AddSequential(new Turn90CounterClockwise());
	AddSequential(new DriveForward250());
	*/

	// This code has the robot start facing the driver's station and picks up a can and drives backward into the auto zone.
	AddParallel(new DriveForward250());
	AddSequential(new RollersIn());
	AddSequential(new DriveForward100());
	AddSequential(new ElevatorUp());
	AddSequential(new DriveBackward1000());
	//AddSequential(new DriveForward250());
}
