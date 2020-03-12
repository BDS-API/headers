#pragma once

#include <string>
#include "ScriptEventListener.h"


class ScriptTelemetryEventListener : ScriptEventListener {

public:
    ~ScriptTelemetryEventListener();
    virtual void onScriptLoaded(std::string const&, unsigned long);
    virtual void onScriptRan(std::string const&, std::string const&, bool);
    ScriptTelemetryEventListener(IMinecraftEventing &, bool);
};
