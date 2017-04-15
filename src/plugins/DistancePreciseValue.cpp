#include "../../../pchdef.h"
#include "../../playerbot.h"
#include "DistancePreciseValue.h"

using namespace ai;



float DistancePreciseValue::Calculate()
{
	Unit* target = AI_VALUE(Unit*, "current target");
	float bx = ai->GetBot()->GetPositionX();
	float by = ai->GetBot()->GetPositionY();

	if (!target || !target->IsInWorld())
		return 0.0f;

	float tx = target->GetPositionX();
	float ty = target->GetPositionY();

	return pow(pow(bx - tx, 2) + pow(by - ty, 2), 0.5f);
}