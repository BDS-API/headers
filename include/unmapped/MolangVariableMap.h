#pragma once



class MolangVariableMap {

public:
    MolangVariableMap(); // _ZN17MolangVariableMapC2Ev
    ~MolangVariableMap(); // _ZN17MolangVariableMapD2Ev
    MolangVariableMap(unsigned long); // _ZN17MolangVariableMapC2Em
    void getVariables()const; // _ZNK17MolangVariableMap12getVariablesEv
    void getMolangVariable(HashedString const&)const; // _ZNK17MolangVariableMap17getMolangVariableERK12HashedString
    void getMolangVariable(unsigned long, char const*)const; // _ZNK17MolangVariableMap17getMolangVariableEmPKc
    void getOrAddMolangVariable(HashedString const&); // _ZN17MolangVariableMap22getOrAddMolangVariableERK12HashedString
    void getOrAddMolangVariable(unsigned long, char const*); // _ZN17MolangVariableMap22getOrAddMolangVariableEmPKc
    void setMolangVariable(HashedString const&, float); // _ZN17MolangVariableMap17setMolangVariableERK12HashedStringf
    void setMolangVariable(unsigned long, char const*, float); // _ZN17MolangVariableMap17setMolangVariableEmPKcf
    void removeMolangVariable(unsigned long); // _ZN17MolangVariableMap20removeMolangVariableEm
    void clear(); // _ZN17MolangVariableMap5clearEv
    void size()const; // _ZNK17MolangVariableMap4sizeEv
};
