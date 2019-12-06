#pragma once

class ScriptLevelWeatherEventListener : LevelEventListener {

public:
    virtual ~ScriptLevelWeatherEventListener();
    virtual void onLevelWeatherChange(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, bool);

    void ScriptLevelWeatherEventListener(MinecraftServerScriptEngine &);
};
