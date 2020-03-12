#pragma once

#include "../../unmapped/ScriptEngine.h"
#include <string>
#include "ScriptEventData.h"
#include "../../ScriptObjectHandle.h"


class ScriptServerWeatherEventData : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerWeatherEventData();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void setDimension(std::string const&);
    void setRaining(bool);
    ScriptServerWeatherEventData();
    std::string getName();
    void getHash();
    void setLightning(bool);
};
