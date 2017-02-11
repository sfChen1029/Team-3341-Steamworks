#include <Commands/AutonomousLeft.h>
#include "TurnAndDrive.h"
#include "NavigateCV.h"
#include "../CommandBase.h"
AutonomousLeft::AutonomousLeft(){

	//Requires(drive);
	AddSequential(new TurnAndDrive(100,0));
	AddSequential(new TurnAndDrive(0,-90));
	//AddSequential(new NavigateCV());
}


