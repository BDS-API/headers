#pragma once

#include "../../ScriptObjectHandle"
#include "../../unmapped/ScriptEngine"


class ScriptServerWeatherEventData : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerWeatherEventData::~ScriptServerWeatherEventData()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerWeatherEventData(void);
    void setDimension(std::string const&);
    void setRaining(bool);
    void setLightning(bool);
};
