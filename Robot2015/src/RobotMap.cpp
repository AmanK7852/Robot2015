// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::driveTrainRightMotor = NULL;
SpeedController* RobotMap::driveTrainLeftMotor = NULL;
RobotDrive* RobotMap::driveTrainRobotDrive = NULL;
Encoder* RobotMap::driveTrainDriveEncoder = NULL;
SpeedController* RobotMap::elevatorElevatorMotor = NULL;
DigitalInput* RobotMap::elevatorLowerOpticGate = NULL;
Encoder* RobotMap::elevatorElevatorEncoder = NULL;
DigitalInput* RobotMap::elevatorUpperOpticGate = NULL;
SpeedController* RobotMap::pickerUpperLeftRoller = NULL;
SpeedController* RobotMap::pickerUpperRightRoller = NULL;
RobotDrive* RobotMap::pickerUpperRollerDrive = NULL;
AnalogInput* RobotMap::pickerUpperPickupIR = NULL;
DigitalInput* RobotMap::pickerUpperAutoSwitch1 = NULL;
DigitalInput* RobotMap::pickerUpperAutoSwitch2 = NULL;
DigitalInput* RobotMap::punchBackLimitSwitch = NULL;
SpeedController* RobotMap::punchPunchMotor = NULL;
DigitalInput* RobotMap::punchFrontLimitSwitch = NULL;
DigitalOutput* RobotMap::lEDSubsystemLED = NULL;
AnalogInput* RobotMap::lEDSubsystemLEDUltrasonic = NULL;
DigitalInput* RobotMap::canHolderCanOpenLimitSwitch = NULL;
DigitalInput* RobotMap::canHolderCanClosedLimitSwitch = NULL;
SpeedController* RobotMap::canHolderCanHolderMotor = NULL;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
Gyro* RobotMap::driveTrainDriveGyro = NULL;

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	driveTrainRightMotor = new Victor(4);
	lw->AddActuator("DriveTrain", "RightMotor", (Victor*) driveTrainRightMotor);
	
	driveTrainLeftMotor = new Victor(5);
	lw->AddActuator("DriveTrain", "LeftMotor", (Victor*) driveTrainLeftMotor);
	
	driveTrainRobotDrive = new RobotDrive(driveTrainLeftMotor, driveTrainRightMotor);
	
	driveTrainRobotDrive->SetSafetyEnabled(true);
        driveTrainRobotDrive->SetExpiration(0.1);
        driveTrainRobotDrive->SetSensitivity(0.07);
        driveTrainRobotDrive->SetMaxOutput(1.0);
        driveTrainRobotDrive->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
        driveTrainRobotDrive->SetInvertedMotor(RobotDrive::kRearRightMotor, true);        

	driveTrainDriveEncoder = new Encoder(4, 5, false, Encoder::k4X);
	lw->AddSensor("DriveTrain", "DriveEncoder", driveTrainDriveEncoder);
	driveTrainDriveEncoder->SetDistancePerPulse(1.0);
        driveTrainDriveEncoder->SetPIDSourceParameter(Encoder::kDistance);
	elevatorElevatorMotor = new Victor(6);
	lw->AddActuator("Elevator", "ElevatorMotor", (Victor*) elevatorElevatorMotor);
	
	elevatorLowerOpticGate = new DigitalInput(0);
	lw->AddSensor("Elevator", "LowerOpticGate", elevatorLowerOpticGate);
	
	elevatorElevatorEncoder = new Encoder(2, 3, false, Encoder::k4X);
	lw->AddSensor("Elevator", "ElevatorEncoder", elevatorElevatorEncoder);
	elevatorElevatorEncoder->SetDistancePerPulse(1.0);
        elevatorElevatorEncoder->SetPIDSourceParameter(Encoder::kDistance);
	elevatorUpperOpticGate = new DigitalInput(1);
	lw->AddSensor("Elevator", "UpperOpticGate", elevatorUpperOpticGate);
	
	pickerUpperLeftRoller = new Victor(3);
	lw->AddActuator("PickerUpper", "LeftRoller", (Victor*) pickerUpperLeftRoller);
	
	pickerUpperRightRoller = new Victor(2);
	lw->AddActuator("PickerUpper", "RightRoller", (Victor*) pickerUpperRightRoller);
	
	pickerUpperRollerDrive = new RobotDrive(pickerUpperLeftRoller, pickerUpperRightRoller);
	
	pickerUpperRollerDrive->SetSafetyEnabled(true);
        pickerUpperRollerDrive->SetExpiration(0.1);
        pickerUpperRollerDrive->SetSensitivity(0.5);
        pickerUpperRollerDrive->SetMaxOutput(1.0);
        

	pickerUpperPickupIR = new AnalogInput(0);
	lw->AddSensor("PickerUpper", "PickupIR", pickerUpperPickupIR);
	
	pickerUpperAutoSwitch1 = new DigitalInput(8);
	lw->AddSensor("PickerUpper", "AutoSwitch1", pickerUpperAutoSwitch1);
	
	pickerUpperAutoSwitch2 = new DigitalInput(9);
	lw->AddSensor("PickerUpper", "AutoSwitch2", pickerUpperAutoSwitch2);
	
	punchBackLimitSwitch = new DigitalInput(6);
	lw->AddSensor("Punch", "BackLimitSwitch", punchBackLimitSwitch);
	
	punchPunchMotor = new Victor(1);
	lw->AddActuator("Punch", "PunchMotor", (Victor*) punchPunchMotor);
	
	punchFrontLimitSwitch = new DigitalInput(7);
	lw->AddSensor("Punch", "FrontLimitSwitch", punchFrontLimitSwitch);
	
	lEDSubsystemLED = new DigitalOutput(10);
	lw->AddActuator("LEDSubsystem", "LED", lEDSubsystemLED);
	
	lEDSubsystemLEDUltrasonic = new AnalogInput(2);
	lw->AddSensor("LEDSubsystem", "LEDUltrasonic", lEDSubsystemLEDUltrasonic);
	
	canHolderCanOpenLimitSwitch = new DigitalInput(11);
	lw->AddSensor("CanHolder", "CanOpenLimitSwitch", canHolderCanOpenLimitSwitch);
	
	canHolderCanClosedLimitSwitch = new DigitalInput(12);
	lw->AddSensor("CanHolder", "CanClosedLimitSwitch", canHolderCanClosedLimitSwitch);
	
	canHolderCanHolderMotor = new Victor(0);
	lw->AddActuator("CanHolder", "CanHolderMotor", (Victor*) canHolderCanHolderMotor);
	


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	driveTrainDriveGyro = new Gyro(1);
	lw->AddSensor("Gyro", "DriveGyro", driveTrainDriveGyro);
}