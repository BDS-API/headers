#pragma once

#include "../../actor/Actor.h"
#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include "../ScriptVersionInfo.h"
#include "./ScriptContainerComponentBase.h"
#include "../unmapped/ScriptServerContext.h"


class ScriptArmorContainerComponent : ScriptContainerComponentBase {

public:
    static long mHash;

    virtual ~ScriptArmorContainerComponent();
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;

    void getHash();
    ScriptArmorContainerComponent();
};
