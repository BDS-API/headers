#pragma once

#include <string>
#include "ScriptEventListener.h"


class ScriptTelemetryEventListener : ScriptEventListener {

public:
    ~ScriptTelemetryEventListener(); // _ZN28ScriptTelemetryEventListenerD2Ev
    virtual void onScriptLoaded(std::string const&, unsigned long); // _ZN28ScriptTelemetryEventListener14onScriptLoadedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
    virtual void onScriptRan(std::string const&, std::string const&, bool); // _ZN28ScriptTelemetryEventListener11onScriptRanERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_b
    ScriptTelemetryEventListener(IMinecraftEventing &, bool); // _ZN28ScriptTelemetryEventListenerC2ER18IMinecraftEventingb
};
