#pragma once

#include "../ScriptObjectHandle.h"
#include "../unmapped/ScriptEngine.h"
#include "../unmapped/ScriptServerContext.h"
#include "../../actor/Actor.h"
#include "../ScriptVersionInfo.h"


class ScriptHealableComponent /*ScriptTemplateFactory<ScriptServerContext>::Component*/ { //TODO: incomplete class definition

public:
    static long mHash;

    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    ~ScriptHealableComponent();
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    ScriptHealableComponent();
    std::string getName();
    void getHash();
};
