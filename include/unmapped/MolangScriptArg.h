#pragma once

class MolangScriptArg {

public:

    MolangScriptArg(MolangScriptArg const&);
    MolangScriptArg(void);
    MolangScriptArg(float);
    void clear(void);
    bool isEqual(MolangScriptArg const&)const;
    void set(Json::Value const&);
};
