#pragma once

#include <string>
#include <memory>


class DefinitionInstanceGroup {

public:
    void add(std::shared_ptr<IDefinitionInstance> const&); // _ZN23DefinitionInstanceGroup3addERKSt10shared_ptrI19IDefinitionInstanceE
    void remove(std::shared_ptr<IDefinitionInstance> const&); // _ZN23DefinitionInstanceGroup6removeERKSt10shared_ptrI19IDefinitionInstanceE
    void clear(); // _ZN23DefinitionInstanceGroup5clearEv
    void combine(DefinitionInstanceGroup const&); // _ZN23DefinitionInstanceGroup7combineERKS_
    void subtract(DefinitionInstanceGroup const&); // _ZN23DefinitionInstanceGroup8subtractERKS_
    void contains(DefinitionInstanceGroup const&)const; // _ZNK23DefinitionInstanceGroup8containsERKS_
    void overlaps(DefinitionInstanceGroup const&)const; // _ZNK23DefinitionInstanceGroup8overlapsERKS_
    std::string _getDefinitionNameFromTypeId(unsigned short const&); // _ZN23DefinitionInstanceGroup28_getDefinitionNameFromTypeIdB5cxx11ERKt
    ~DefinitionInstanceGroup(); // _ZN23DefinitionInstanceGroupD2Ev
    DefinitionInstanceGroup(); // _ZN23DefinitionInstanceGroupC2Ev
    DefinitionInstanceGroup(DefinitionInstanceGroup &&); // _ZN23DefinitionInstanceGroupC2EOS_
};
