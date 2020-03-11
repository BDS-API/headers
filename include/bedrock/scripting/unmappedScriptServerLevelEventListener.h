#pragma once

#include "../../level/LevelEventListener.h"
#include "../../../unmapped/MinecraftServerScriptEngine.h"


class ScriptServerLevelEventListener : LevelEventListener {

public:
    virtual ~ScriptServerLevelEventListener();
    virtual void onLevelTick();

    ScriptServerLevelEventListener(MinecraftServerScriptEngine &);
};
