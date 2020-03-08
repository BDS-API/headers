#pragma once

#include "../json/Value"


class MolangScriptArg {

public:

    MolangScriptArg(MolangScriptArg const&);
    MolangScriptArg(void);
    MolangScriptArg(float);
    void clear();
    bool isEqual(MolangScriptArg const&)const;
    void set(Json::Value const&);
};
