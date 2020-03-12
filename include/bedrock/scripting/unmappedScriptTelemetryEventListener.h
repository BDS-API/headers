#pragma once

#include "ScriptEventListener.h"
#include <string>
#include "../../eventing/IMinecraftEventing.h"


class ScriptTelemetryEventListener : ScriptEventListener {

public:
    virtual void onScriptLoaded(std::string const&, unsigned long);
    virtual void onScriptRan(std::string const&, std::string const&, bool);
    ~ScriptTelemetryEventListener();
    ScriptTelemetryEventListener(IMinecraftEventing &, bool);
};
