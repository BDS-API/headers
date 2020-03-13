#pragma once

#include "ScriptContainerComponentBase.h"


class ScriptBlockContainerComponent : ScriptContainerComponentBase {

public:
    static long mHash;

    ~ScriptBlockContainerComponent(); // _ZN29ScriptBlockContainerComponentD2Ev
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const; // _ZNK29ScriptBlockContainerComponent12hasComponentERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRb
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, ScriptApi::ScriptObjectHandle const&)const; // _ZNK29ScriptBlockContainerComponent16applyComponentToERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRK5BlockR11BlockSourceRK8BlockPosRKNS0_18ScriptObjectHandleE
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, ScriptApi::ScriptObjectHandle &)const; // _ZNK29ScriptBlockContainerComponent21retrieveComponentFromERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRK5BlockR11BlockSourceRK8BlockPosRNS0_18ScriptObjectHandleE
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, bool &)const; // _ZNK29ScriptBlockContainerComponent12hasComponentERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRK5BlockR11BlockSourceRK8BlockPosRb
    void getHash(); // _ZN29ScriptBlockContainerComponent7getHashEv
    ScriptBlockContainerComponent(); // _ZN29ScriptBlockContainerComponentC2Ev
};
