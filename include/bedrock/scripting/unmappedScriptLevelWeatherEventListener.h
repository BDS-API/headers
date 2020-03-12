#pragma once

#include "../../../unmapped/MinecraftServerScriptEngine.h"
#include "../../level/LevelEventListener.h"
#include <string>


class ScriptLevelWeatherEventListener : LevelEventListener {

public:
    virtual void onLevelWeatherChange(std::string const&, bool, bool);
    ~ScriptLevelWeatherEventListener();
    ScriptLevelWeatherEventListener(MinecraftServerScriptEngine &);
};
