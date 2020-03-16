#pragma once

#include <string>
#include "../../level/LevelEventListener.h"


class ScriptLevelWeatherEventListener : public LevelEventListener {

public:
    virtual ~ScriptLevelWeatherEventListener(); // _ZN31ScriptLevelWeatherEventListenerD2Ev
    virtual void __fake_function0(); // fake
    virtual void onLevelWeatherChange(std::string const&, bool, bool); // _ZN31ScriptLevelWeatherEventListener20onLevelWeatherChangeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbb
    ScriptLevelWeatherEventListener(MinecraftServerScriptEngine &); // _ZN31ScriptLevelWeatherEventListenerC2ER27MinecraftServerScriptEngine
};
