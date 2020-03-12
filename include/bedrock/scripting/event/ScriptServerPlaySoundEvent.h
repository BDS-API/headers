#pragma once

#include "../ScriptObjectHandle.h"
#include <string>
#include "../unmapped/ScriptEngine.h"
#include "../unmapped/ScriptServerContext.h"
#include "../ScriptVersionInfo.h"


class ScriptServerPlaySoundEvent /*ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent*/ { //TODO: incomplete class definition

public:
    static long mHash;

    ~ScriptServerPlaySoundEvent();
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);
    ScriptServerPlaySoundEvent();
    void getHash();
};
