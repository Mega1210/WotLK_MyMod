#include "../../../pchdef.h"
#include "../../playerbot.h"
#include "JumpAction.h"
#include "../../AiFactory.h"
#include "../Entities/Pet/Pet.h"
#include "../../../game/AI/CreatureAI.h"



using namespace ai;



bool JumpAction::Execute(Event event)
{
	MotionMaster &mm = *bot->GetMotionMaster();
	mm.Clear();
	float o = bot->GetOrientation();
	Position *pos;
	Pet* pet = bot->GetPet();

	bot->CastStop();
	ai->InterruptSpell();

	if (pet)
		pet->CombatStop(true);




	float sign = (bot->GetPositionX() < pos->GetPositionX()) ? 1.f : -1.f;
	float x = bot->GetPositionX() + 0.14f * sign;
	sign = (bot->GetPositionY() < pos->GetPositionY()) ? 1.f : -1.f;
	float y = bot->GetPositionY() + 0.14f * sign;
	float z = bot->GetPositionZ() - 0.01f;

	mm.MoveJump(x, y, z, o, 0.32f, 4.1f);

	return true;
}