#pragma once
#include "../Value.h"
#include "NearestUnitsValue.h"
#include "../../PlayerbotAIConfig.h"

namespace ai
{
	class AllUnfriendlyUnitsValue : public NearestUnitsValue
	{
	public:
		AllUnfriendlyUnitsValue(PlayerbotAI* ai, float range = sPlayerbotAIConfig.sightDistance) :
			NearestUnitsValue(ai) {}

	protected:
		virtual void FindUnits(list<Unit*> &targets);
		virtual bool AcceptUnit(Unit* unit);

	};
}

