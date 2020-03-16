#pragma once

#include "../../level/LevelEventListener.h"


class ScriptServerLevelEventListener : public LevelEventListener {

public:
    virtual ~ScriptServerLevelEventListener(); // _ZN30ScriptServerLevelEventListenerD2Ev
    virtual void __fake_function0(); // fake
    virtual void onLevelTick(); // _ZN30ScriptServerLevelEventListener11onLevelTickEv
    ScriptServerLevelEventListener(MinecraftServerScriptEngine &); // _ZN30ScriptServerLevelEventListenerC2ER27MinecraftServerScriptEngine
};
