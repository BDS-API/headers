#pragma once

#include "../ScriptVersionInfo"
#include "../../actor/Actor"
#include "../unmapped/ScriptEngine"
#include "../../../unmapped/Block"
#include "../ScriptObjectHandle"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../unmapped/ScriptServerContext"


class ScriptBlockContainerComponent : ScriptContainerComponentBase {

public:
    static long mHash;

    ScriptBlockContainerComponent::~ScriptBlockContainerComponent()
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, bool &)const;

    void getHash();
    ScriptBlockContainerComponent(void);
};
