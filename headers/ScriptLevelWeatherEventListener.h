#pragma once

class ScriptLevelWeatherEventListener : LevelEventListener {

public:
    virtual ~ScriptLevelWeatherEventListener();
    virtual void onLevelWeatherChange(std::string const&, bool, bool);

    void ScriptLevelWeatherEventListener(MinecraftServerScriptEngine &);
};
