#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerWeatherEventData : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerWeatherEventData(); // _ZN28ScriptServerWeatherEventDataD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK28ScriptServerWeatherEventData10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN28ScriptServerWeatherEventData7getHashEv
    ScriptServerWeatherEventData(); // _ZN28ScriptServerWeatherEventDataC2Ev
    void setDimension(std::string const&); // _ZN28ScriptServerWeatherEventData12setDimensionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setRaining(bool); // _ZN28ScriptServerWeatherEventData10setRainingEb
    void setLightning(bool); // _ZN28ScriptServerWeatherEventData12setLightningEb
    std::string getName(); // _ZN28ScriptServerWeatherEventData7getNameB5cxx11Ev
};
