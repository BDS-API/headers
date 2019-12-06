#pragma once

class ScriptServerWeatherEventData : ScriptEventData {

public:
    static long ScriptServerWeatherEventData::mHash;

    virtual ~ScriptServerWeatherEventData();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerWeatherEventData(void);
    void setDimension(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setRaining(bool);
    void setLightning(bool);
};
