#include "../../../pchdef.h"
#include "../../playerbot.h"
#include "AllDpsAction.h"
#include "../../AiFactory.h"
#include "../Entities/Pet/Pet.h"


using namespace ai;



bool AllDpsAction::Execute(Event event)
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

		if (bot->HasSpell(ARCANE_POWER))
			bot->CastSpell(target, ARCANE_POWER, false);

		if (bot->HasSpell(COMBUSTION))
			bot->CastSpell(target, COMBUSTION, false);

		if (bot->HasSpell(PRESENCE_OF_MIND))
			bot->CastSpell(target, PRESENCE_OF_MIND, false);

		return true;

	case CLASS_DRUID:

		return true;
	case CLASS_HUNTER:

		Pet* pet = bot->GetPet();

		if (bot->HasSpell(KILL_COMMAND))
			bot->CastSpell(target, KILL_COMMAND, false);

		if (bot->HasSpell(BESTIAL_WRATH))
			bot->CastSpell(target, BESTIAL_WRATH, false);

		if (bot->HasSpell(RAPID_FIRE))
			bot->CastSpell(target, RAPID_FIRE, false);


		if (pet)
		{
			if (pet->HasSpell(CALL_OF_THE_WILD))
				pet->CastSpell(target, CALL_OF_THE_WILD, false);

			if (pet->HasSpell(RABID))
				pet->CastSpell(target, RABID, false);
		}

		return true;
	}


	return false;
}