#pragma once

#include "../Action.h"

namespace ai
{


	class CcRtiAction : public Action {

		enum polyShape
		{
			POLYMORPH_SHEEP_RANK1 = 118,
			POLYMORPH_SHEEP_RANK2 = 12824,
			POLYMORPH_SHEEP_RANK3 = 12825,
			POLYMORPH_SHEEP_RANK4 = 12826,
			POLYMORPH_SERPENT_RANK1 = 61025,
			POLYMORPH_BLACKCAT_RANK1 = 61305,
			POLYMORPH_RABBIT_RANK1 = 61721,
			POLYMORPH_TURKEY_RANK1 = 61780

		};

	public:
		CcRtiAction(PlayerbotAI* ai) : Action(ai, "cc rti") {}

	public:
		virtual bool Execute(Event event);

	};

}


