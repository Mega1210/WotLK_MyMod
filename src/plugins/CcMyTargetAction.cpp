#include "../../../pchdef.h"
#include "../../playerbot.h"
#include "ccMyTargetAction.h"
#include "../../AiFactory.h"


using namespace ai;



bool ccMyTargetAction::Execute(Event event)
{
	Player* bot;
	Unit* target = NULL;
	Player* master = GetMaster();
	ostringstream msg;

	bot = ai->GetBot();

	if (master)
		target = master->GetSelectedUnit();

	if (!target)
		target = bot;

	switch (bot->getClass())
	{
	case CLASS_MAGE:

		bot->SetSelection(target->GetGUID());
		if (bot->getLevel() < 8)
			return false;

		if (bot->getLevel() >= 60)
		{
			switch (urand(0, 4))
			{
			case 0: bot->CastSpell(target, POLYMORPH_SHEEP_RANK4, false);
			case 1:bot->CastSpell(target, POLYMORPH_SERPENT_RANK1, false);
			case 2:bot->CastSpell(target, POLYMORPH_BLACKCAT_RANK1, false);
			case 3:bot->CastSpell(target, POLYMORPH_RABBIT_RANK1, false);
			case 4:bot->CastSpell(target, POLYMORPH_TURKEY_RANK1, false);
			}

		}
		else if (bot->getLevel() >= 40)
			bot->CastSpell(target, POLYMORPH_SHEEP_RANK3, false);
		else if (bot->getLevel() >= 20)
			bot->CastSpell(target, POLYMORPH_SHEEP_RANK2, false);
		else if (bot->getLevel() >= 8)
			bot->CastSpell(target, POLYMORPH_SHEEP_RANK1, false);
		return true;

	case CLASS_DRUID:

		return true;
	case CLASS_HUNTER:

		return true;
	}


	return false;
}