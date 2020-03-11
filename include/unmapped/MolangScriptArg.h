#pragma once

#include "./MolangScriptArg.h"
#include "../json/Value.h"


class MolangScriptArg {

public:

    ~MolangScriptArg();
    MolangScriptArg(MolangScriptArg const&);
    MolangScriptArg();
    MolangScriptArg(float);
    void clear();
    bool isEqual(MolangScriptArg const&)const;
    void set(Json::Value const&);
};
