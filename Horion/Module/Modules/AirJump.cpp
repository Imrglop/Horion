#include "AirJump.h"



AirJump::AirJump() : IModule('G', MOVEMENT)
{
}


AirJump::~AirJump()
{
}

const char* AirJump::getModuleName()
{
	return ("AirJump");
}

void AirJump::onTick(C_GameMode* gm) {
	if(gm->player != nullptr)
		gm->player->onGround = true;
}
