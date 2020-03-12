#pragma once

#include "HashedString.h"


class MolangVariableMap {

public:
    void getOrAddMolangVariable(HashedString const&);
    void setMolangVariable(HashedString const&, float);
    void setMolangVariable(unsigned long, char const*, float);
    void size()const;
    void removeMolangVariable(unsigned long);
    MolangVariableMap();
    void getOrAddMolangVariable(unsigned long, char const*);
    MolangVariableMap(unsigned long);
    void getVariables()const;
    void getMolangVariable(HashedString const&)const;
    void clear();
    void getMolangVariable(unsigned long, char const*)const;
    ~MolangVariableMap();
};
