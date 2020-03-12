#pragma once

#include "../ScriptObjectHandle.h"
#include "../unmapped/ScriptEngine.h"
#include "../unmapped/ScriptServerContext.h"
#include "../../actor/Actor.h"
#include "../ScriptVersionInfo.h"


class ScriptInventoryComponent /*ScriptTemplateFactory<ScriptServerContext>::Component*/ { //TODO: incomplete class definition

public:
    static long mHash;

    ~ScriptInventoryComponent();
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    std::string getName();
    ScriptInventoryComponent();
    void getHash();
};
