#pragma once

#include "../../../unmapped/MinecraftServerScriptEngine.h"
#include "../../level/LevelEventListener.h"


class ScriptServerLevelEventListener : LevelEventListener {

public:
    ~ScriptServerLevelEventListener();
    virtual void onLevelTick();
    ScriptServerLevelEventListener(MinecraftServerScriptEngine &);
};
