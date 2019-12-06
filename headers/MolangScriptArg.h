#pragma once

class MolangScriptArg {

public:

    void MolangScriptArg(MolangScriptArg const&);
    void MolangScriptArg(void);
    void MolangScriptArg(float);
    void clear(void);
    bool isEqual(MolangScriptArg const&)const;
    void set(Json::Value const&);
};
