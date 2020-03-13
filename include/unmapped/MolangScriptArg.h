#pragma once



class MolangScriptArg {

public:
    ~MolangScriptArg(); // _ZN15MolangScriptArgD2Ev
    MolangScriptArg(MolangScriptArg const&); // _ZN15MolangScriptArgC2ERKS_
    MolangScriptArg(); // _ZN15MolangScriptArgC2Ev
    MolangScriptArg(float); // _ZN15MolangScriptArgC2Ef
    void clear(); // _ZN15MolangScriptArg5clearEv
    bool isEqual(MolangScriptArg const&)const; // _ZNK15MolangScriptArg7isEqualERKS_
    void set(Json::Value const&); // _ZN15MolangScriptArg3setERKN4Json5ValueE
};
