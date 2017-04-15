#include "../../../pchdef.h"
#include "../../playerbot.h"
#include "AllUnfriendlyUnitsValue.h"

#include "../../../Grids/Notifiers/GridNotifiers.h"
#include "../../../Grids/Notifiers/GridNotifiersImpl.h"
#include "../../../Grids/Cells/CellImpl.h"

using namespace ai;
using namespace Trinity;

void AllUnfriendlyUnitsValue::FindUnits(list<Unit*> &targets)
{
	AnyUnfriendlyUnitInObjectRangeCheck u_check(bot, bot, range);
	UnitListSearcher<AnyUnfriendlyUnitInObjectRangeCheck> searcher(bot, targets, u_check);
	bot->VisitNearbyObject(bot->GetMap()->GetVisibilityRange(), searcher);
}

bool AllUnfriendlyUnitsValue::AcceptUnit(Unit* unit)
{
	return (unit->IsHostileTo(bot) || (unit->getLevel() > 1 && !unit->IsFriendlyTo(bot)));
}
