#pragma once



class MolangVariableMap {

public:
    void getMolangVariable(HashedString const&)const;
    MolangVariableMap();
    MolangVariableMap(unsigned long);
    void setMolangVariable(unsigned long, char const*, float);
    void getOrAddMolangVariable(unsigned long, char const*);
    void getMolangVariable(unsigned long, char const*)const;
    void clear();
    void getOrAddMolangVariable(HashedString const&);
    void getVariables()const;
    void size()const;
    void removeMolangVariable(unsigned long);
    ~MolangVariableMap();
    void setMolangVariable(HashedString const&, float);
};
