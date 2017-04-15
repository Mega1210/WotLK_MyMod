#pragma once

#include "../Action.h"

namespace ai
{


	class AllDpsAction : public Action {
		enum DpsSpell
		{
			KILL_COMMAND = 34026,
			BESTIAL_WRATH = 19574,
			RAPID_FIRE = 3045,
			CALL_OF_THE_WILD = 53434,
			RABID = 53403,
			ARCANE_POWER = 12042,
			COMBUSTION = 11129,
			PRESENCE_OF_MIND = 12043

		};

	public:
		AllDpsAction(PlayerbotAI* ai) : Action(ai, "all dps") {}

	public:
		virtual bool Execute(Event event);

	};

}

