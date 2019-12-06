#pragma once

class DefinitionInstanceGroup {

public:

    void add(std::shared_ptr<IDefinitionInstance> const&);
    void remove(std::shared_ptr<IDefinitionInstance> const&);
    void clear(void);
    void combine(DefinitionInstanceGroup const&);
    void subtract(DefinitionInstanceGroup const&);
    void contains(DefinitionInstanceGroup const&)const;
    void overlaps(DefinitionInstanceGroup const&)const;
    void DefinitionInstanceGroup(void);
    void DefinitionInstanceGroup(DefinitionInstanceGroup&&);
};
