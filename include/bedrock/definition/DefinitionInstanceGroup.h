#pragma once

#include <memory>
#include "instance/IDefinitionInstance.h"


class DefinitionInstanceGroup {

public:
    void add(std::shared_ptr<IDefinitionInstance> const&);
    void subtract(DefinitionInstanceGroup const&);
    void overlaps(DefinitionInstanceGroup const&)const;
    std::string _getDefinitionNameFromTypeId(unsigned short const&);
    void remove(std::shared_ptr<IDefinitionInstance> const&);
    ~DefinitionInstanceGroup();
    void combine(DefinitionInstanceGroup const&);
    DefinitionInstanceGroup();
    void clear();
    DefinitionInstanceGroup(DefinitionInstanceGroup &&);
    void contains(DefinitionInstanceGroup const&)const;
};
