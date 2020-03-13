#pragma once

#include "../../level/LevelEventListener.h"


class ScriptServerLevelEventListener : LevelEventListener {

public:
    ~ScriptServerLevelEventListener(); // _ZN30ScriptServerLevelEventListenerD2Ev
    virtual void onLevelTick(); // _ZN30ScriptServerLevelEventListener11onLevelTickEv
    ScriptServerLevelEventListener(MinecraftServerScriptEngine &); // _ZN30ScriptServerLevelEventListenerC2ER27MinecraftServerScriptEngine
};
