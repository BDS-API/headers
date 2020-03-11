#pragma once

#include "../../level/LevelEventListener.h"
#include "../../../unmapped/MinecraftServerScriptEngine.h"
#include <string>


class ScriptLevelWeatherEventListener : LevelEventListener {

public:
    virtual ~ScriptLevelWeatherEventListener();
    virtual void onLevelWeatherChange(std::string const&, bool, bool);

    ScriptLevelWeatherEventListener(MinecraftServerScriptEngine &);
};
