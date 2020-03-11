#pragma once

#include "instance/IDefinitionInstance.h"
#include <memory>
#include "./DefinitionInstanceGroup.h"
#include <string>


class DefinitionInstanceGroup {

public:

    void add(std::shared_ptr<IDefinitionInstance> const&);
    void remove(std::shared_ptr<IDefinitionInstance> const&);
    void clear();
    void combine(DefinitionInstanceGroup const&);
    void subtract(DefinitionInstanceGroup const&);
    void contains(DefinitionInstanceGroup const&)const;
    void overlaps(DefinitionInstanceGroup const&)const;
    std::string _getDefinitionNameFromTypeId(unsigned short const&);
    ~DefinitionInstanceGroup();
    DefinitionInstanceGroup();
    DefinitionInstanceGroup(DefinitionInstanceGroup &&);
};
