#pragma once

#include "../../level/LevelEventListener"
#include "../../../unmapped/MinecraftServerScriptEngine"


class ScriptServerLevelEventListener : LevelEventListener {

public:
    ScriptServerLevelEventListener::~ScriptServerLevelEventListener()
    virtual void onLevelTick();

    ScriptServerLevelEventListener(MinecraftServerScriptEngine &);
};
