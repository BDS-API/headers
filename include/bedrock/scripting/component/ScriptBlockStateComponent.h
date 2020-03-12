#pragma once

#include "../../../unmapped/Block.h"
#include "../ScriptObjectHandle.h"
#include "../../block/unmapped/BlockSource.h"
#include "../unmapped/ScriptEngine.h"
#include "../unmapped/ScriptServerContext.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../ScriptVersionInfo.h"


class ScriptBlockStateComponent /*ScriptTemplateFactory<ScriptServerContext>::Component*/ { //TODO: incomplete class definition

public:
    static long mHash;

    ~ScriptBlockStateComponent();
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, bool &)const;
    ScriptBlockStateComponent();
    void getHash();
};
