#pragma once



class MolangScriptArg {

public:
    MolangScriptArg(MolangScriptArg const&);
    ~MolangScriptArg();
    MolangScriptArg();
    void set(Json::Value const&);
    void clear();
    bool isEqual(MolangScriptArg const&)const;
    MolangScriptArg(float);
};
