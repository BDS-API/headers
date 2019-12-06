#pragma once

class ScriptServerLevelEventListener : LevelEventListener {

public:
    virtual ~ScriptServerLevelEventListener();
    virtual void onLevelTick(void);

    void ScriptServerLevelEventListener(MinecraftServerScriptEngine &);
};
