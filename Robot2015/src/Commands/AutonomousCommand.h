// This autonomous command does nothing during autonomous and is only here because we are forced to
// The command based model requires an Autonomous Command,  however we handle autonomous differently than what the system outlines.
// This is just a filler.

#ifndef AUTONOMOUSCOMMAND_H
#define AUTONOMOUSCOMMAND_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class AutonomousCommand: public Command {
public:
	AutonomousCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif//AUTONOMOUSCOMMAND_H
