#pragma once



class ScriptBlockStateComponent /*ScriptTemplateFactory<ScriptServerContext>::Component*/ { //TODO: incomplete class definition

public:
    static long mHash;

    ~ScriptBlockStateComponent(); // _ZN25ScriptBlockStateComponentD2Ev
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const; // _ZNK25ScriptBlockStateComponent12hasComponentERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextR5ActorRb
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, ScriptApi::ScriptObjectHandle const&)const; // _ZNK25ScriptBlockStateComponent16applyComponentToERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRK5BlockR11BlockSourceRK8BlockPosRKNS0_18ScriptObjectHandleE
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, ScriptApi::ScriptObjectHandle &)const; // _ZNK25ScriptBlockStateComponent21retrieveComponentFromERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRK5BlockR11BlockSourceRK8BlockPosRNS0_18ScriptObjectHandleE
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Block const&, BlockSource &, BlockPos const&, bool &)const; // _ZNK25ScriptBlockStateComponent12hasComponentERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRK5BlockR11BlockSourceRK8BlockPosRb
    void getHash(); // _ZN25ScriptBlockStateComponent7getHashEv
    ScriptBlockStateComponent(); // _ZN25ScriptBlockStateComponentC2Ev
};
