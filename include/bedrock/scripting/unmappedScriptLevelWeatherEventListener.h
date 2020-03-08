#pragma once

#include "../../level/LevelEventListener"
#include "../../../unmapped/MinecraftServerScriptEngine"


class ScriptLevelWeatherEventListener : LevelEventListener {

public:
    ScriptLevelWeatherEventListener::~ScriptLevelWeatherEventListener()
    virtual void onLevelWeatherChange(std::string const&, bool, bool);

    ScriptLevelWeatherEventListener(MinecraftServerScriptEngine &);
};
