#pragma once

#include <string>
#include <memory>


class DefinitionInstanceGroup {

public:
    DefinitionInstanceGroup(DefinitionInstanceGroup &&);
    ~DefinitionInstanceGroup();
    void add(std::shared_ptr<IDefinitionInstance> const&);
    void overlaps(DefinitionInstanceGroup const&)const;
    DefinitionInstanceGroup();
    void clear();
    void combine(DefinitionInstanceGroup const&);
    void subtract(DefinitionInstanceGroup const&);
    std::string _getDefinitionNameFromTypeId(unsigned short const&);
    void contains(DefinitionInstanceGroup const&)const;
    void remove(std::shared_ptr<IDefinitionInstance> const&);
};
