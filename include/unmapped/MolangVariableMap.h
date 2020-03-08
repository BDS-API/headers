#pragma once



class MolangVariableMap {

public:

    MolangVariableMap(void);
    MolangVariableMap(unsigned long);
    void getVariables()const;
    void getMolangVariable(HashedString const&)const;
    void getMolangVariable(unsigned long, char const*)const;
    void getOrAddMolangVariable(HashedString const&);
    void getOrAddMolangVariable(unsigned long, char const*);
    void setMolangVariable(HashedString const&, float);
    void setMolangVariable(unsigned long, char const*, float);
    void removeMolangVariable(unsigned long);
    void clear();
    void size()const;
};
