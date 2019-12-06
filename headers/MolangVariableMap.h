#pragma once

class MolangVariableMap {

public:

    void MolangVariableMap(void);
    void MolangVariableMap(unsigned long);
    void getVariables(void)const;
    void getMolangVariable(HashedString const&)const;
    void getMolangVariable(unsigned long, char const*)const;
    void getOrAddMolangVariable(HashedString const&);
    void getOrAddMolangVariable(unsigned long, char const*);
    void setMolangVariable(HashedString const&, float);
    void setMolangVariable(unsigned long, char const*, float);
    void removeMolangVariable(unsigned long);
    void clear(void);
    void size(void)const;
};
