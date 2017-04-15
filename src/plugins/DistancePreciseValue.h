#pragma once
#include "../Value.h"
#include "TargetValue.h"


namespace ai
{
	class DistancePreciseValue : public FloatCalculatedValue
	{
	public:
		DistancePreciseValue(PlayerbotAI* ai) : FloatCalculatedValue(ai) {}

	public:
		float Calculate();
	};
}

