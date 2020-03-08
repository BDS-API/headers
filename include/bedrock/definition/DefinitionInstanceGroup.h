#pragma once

#include "instance/IDefinitionInstance"


class DefinitionInstanceGroup {

public:

    void add(std::shared_ptr<IDefinitionInstance> const&);
    void remove(std::shared_ptr<IDefinitionInstance> const&);
    void clear();
    void combine(DefinitionInstanceGroup const&);
    void subtract(DefinitionInstanceGroup const&);
    void contains(DefinitionInstanceGroup const&)const;
    void overlaps(DefinitionInstanceGroup const&)const;
    DefinitionInstanceGroup(void);
    DefinitionInstanceGroup(DefinitionInstanceGroup&&);
};
