#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerBlockMovedByPistonEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerBlockMovedByPistonEvent(); // _ZN35ScriptServerBlockMovedByPistonEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK35ScriptServerBlockMovedByPistonEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN35ScriptServerBlockMovedByPistonEvent7getHashEv
    ScriptServerBlockMovedByPistonEvent(); // _ZN35ScriptServerBlockMovedByPistonEventC2Ev
    void setPistonPos(BlockPos const&); // _ZN35ScriptServerBlockMovedByPistonEvent12setPistonPosERK8BlockPos
    void setBlockPos(BlockPos const&); // _ZN35ScriptServerBlockMovedByPistonEvent11setBlockPosERK8BlockPos
    void setPistonAction(std::string); // _ZN35ScriptServerBlockMovedByPistonEvent15setPistonActionENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getName(); // _ZN35ScriptServerBlockMovedByPistonEvent7getNameB5cxx11Ev
};
