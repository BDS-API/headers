#pragma once

#include "../../level/LevelEventListener"
#include "../../../unmapped/MinecraftServerScriptEngine"


class ScriptServerLevelEventListener : LevelEventListener {

public:
    virtual ScriptServerLevelEventListener::~ScriptServerLevelEventListener()
    virtual void onLevelTick();

    ScriptServerLevelEventListener(MinecraftServerScriptEngine &);
};
