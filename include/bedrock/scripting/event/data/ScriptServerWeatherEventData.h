#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerWeatherEventData : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerWeatherEventData();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void setDimension(std::string const&);
    void setRaining(bool);
    std::string getName();
    void setLightning(bool);
    void getHash();
    ScriptServerWeatherEventData();
};
