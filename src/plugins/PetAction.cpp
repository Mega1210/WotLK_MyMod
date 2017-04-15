#include "../../../pchdef.h"
#include "../../playerbot.h"
#include "PetAction.h"
#include "../../AiFactory.h"
#include "../Entities/Pet/Pet.h"
#include "../../../game/AI/CreatureAI.h"





using namespace ai;



bool PetAction::Execute(Event event)
{


	Pet* pet = bot->GetPet();
	string name = event.getParam();

	if (name.empty())
	{
		ai->TellMaster("parameters to use: 'happy' or [food]");
		return false;
	}


	if (pet)
	{
		if (name == "happy")
		{
			switch (pet->GetHappinessState())
			{
			case UNHAPPY: 
				ai->TellMaster("My pet is unhappy");
			case CONTENT: 
				ai->TellMaster("My pet is content");
			case HAPPY: 
				ai->TellMaster("My pet is happy");
			}
			return true;
		}
		else
		{

			list<Item*> items = AI_VALUE2(list<Item*>, "inventory items", name);

			if (items.size() > 1)
			{
				//ai->TellMaster("More than 1 item");
				list<Item*>::iterator i = items.begin();
				Item* itemTarget = *i++;
				Item* item = *i;
				bot->CastSpell(pet, 6991, false, item);

			}
			else if (!items.empty())
			{
				//ai->TellMaster("Only 1 item");
				bot->CastSpell(pet, 6991, false, *items.begin());

			}

			return true;
		}

	}

	ai->TellMaster("I have no pet");
	return false;






}