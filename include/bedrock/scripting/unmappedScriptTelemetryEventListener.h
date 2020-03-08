#pragma once

#include "../../eventing/IMinecraftEventing"


class ScriptTelemetryEventListener : ScriptEventListener {

public:
    virtual ScriptTelemetryEventListener::~ScriptTelemetryEventListener()
    virtual void onScriptLoaded(std::string const&, unsigned long);
    virtual void onScriptRan(std::string const&, std::string const&, bool);

    ScriptTelemetryEventListener(IMinecraftEventing &, bool);
};
