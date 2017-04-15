#pragma once

#include "../Action.h"

namespace ai
{


	class JumpAction : public Action {


	public:
		JumpAction(PlayerbotAI* ai) : Action(ai, "jump") {}

	public:
		virtual bool Execute(Event event);

	};

}

