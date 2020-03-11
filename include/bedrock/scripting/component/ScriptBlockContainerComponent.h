#pragma once

#include "../../../unmapped/Block.h"
#include "../../actor/Actor.h"
#include "../unmapped/ScriptEngine.h"
#include "../../util/BlockPos.h"
#include "../ScriptObjectHandle.h"
#include "../../block/unmapped/BlockSource.h"
#include "../ScriptVersionInfo.h"
#include "./ScriptContainerComponentBase.h"
#include "../unmapped/ScriptServerContext.h"


class ScriptBlockContainerComponent : ScriptContainerComponentBase {

public:
    static long mHash;

    virtual ~ScriptBlockContainerComponent();
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, bool &)const;

    void getHash();
    ScriptBlockContainerComponent();
};
