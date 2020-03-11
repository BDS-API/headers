#pragma once

#include "../../eventing/IMinecraftEventing.h"
#include "./ScriptEventListener.h"
#include <string>


class ScriptTelemetryEventListener : ScriptEventListener {

public:
    virtual ~ScriptTelemetryEventListener();
    virtual void onScriptLoaded(std::string const&, unsigned long);
    virtual void onScriptRan(std::string const&, std::string const&, bool);

    ScriptTelemetryEventListener(IMinecraftEventing &, bool);
};
