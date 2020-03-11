#pragma once

#include "../../actor/Actor.h"
#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include "../ScriptVersionInfo.h"
#include "../unmapped/ScriptServerContext.h"
#include <string>


class ScriptHealableComponent /*ScriptTemplateFactory<ScriptServerContext>::Component*/ { //TODO: incomplete class definition

public:
    static long mHash;

    virtual ~ScriptHealableComponent();
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;

    void getHash();
    ScriptHealableComponent();
    std::string getName();
};
