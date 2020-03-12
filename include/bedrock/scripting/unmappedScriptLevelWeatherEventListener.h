#pragma once

#include <string>
#include "../../level/LevelEventListener.h"


class ScriptLevelWeatherEventListener : LevelEventListener {

public:
    ~ScriptLevelWeatherEventListener();
    virtual void onLevelWeatherChange(std::string const&, bool, bool);
    ScriptLevelWeatherEventListener(MinecraftServerScriptEngine &);
};
