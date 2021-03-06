#pragma once
#include "../Value.h"
#include "NearestUnitsValue.h"
#include "../../PlayerbotAIConfig.h"

namespace BotAI
{
    class NearestNonBotPlayersValue : public NearestUnitsValue
	{
	public:
        NearestNonBotPlayersValue(PlayerbotAI* ai, float range = sPlayerbotAIConfig.reactDistance) :
          NearestUnitsValue(ai) {}

    protected:
        void FindUnits(list<Unit*> &targets);
        bool AcceptUnit(Unit* unit);
	};
}
