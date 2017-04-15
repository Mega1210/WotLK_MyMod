#pragma once

#include "../Action.h"

namespace ai
{


	class PetAction : public Action {


	public:
		PetAction(PlayerbotAI* ai) : Action(ai, "pet") {}

	public:
		virtual bool Execute(Event event);



	};

}
