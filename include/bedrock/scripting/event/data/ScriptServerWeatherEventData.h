#pragma once

#include "../../ScriptObjectHandle.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include <string>


class ScriptServerWeatherEventData : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerWeatherEventData();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerWeatherEventData();
    void setDimension(std::string const&);
    void setRaining(bool);
    void setLightning(bool);
    std::string getName();
};
