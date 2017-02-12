#include <Commands/AutonomousLeft.h>
#include "TurnAndDrive.h"
#include "NavigateCV.h"
#include "../CommandBase.h"
#include "SetDriveforward.h"
AutonomousLeft::AutonomousLeft(){

	//Requires(drive);
	AddSequential(new TurnAndDrive(100,0));//new SetDriveForward());//
	AddSequential(new TurnAndDrive(0,0.5));
	//AddSequential(new NavigateCV());
}


