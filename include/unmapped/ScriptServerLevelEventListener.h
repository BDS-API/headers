#pragma once

class ScriptServerLevelEventListener : LevelEventListener {

public:
    virtual ScriptServerLevelEventListener::~ScriptServerLevelEventListener();
    virtual void onLevelTick(void);

    ScriptServerLevelEventListener(MinecraftServerScriptEngine &);
};
