#pragma once

#include "../json/Value.h"


class MolangScriptArg {

public:
    void set(Json::Value const&);
    void clear();
    bool isEqual(MolangScriptArg const&)const;
    MolangScriptArg();
    ~MolangScriptArg();
    MolangScriptArg(MolangScriptArg const&);
    MolangScriptArg(float);
};
