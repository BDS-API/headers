#pragma once

class StructureTemplatePool {

public:

    StructureTemplatePool(void);
    StructureTemplatePool(std::string, std::string, std::vector<std::pair<StructurePoolElement const*, int>, std::allocator<std::pair<StructurePoolElement const*, int>>> &);
    void getTemplate(unsigned long)const;
    void getRandomTemplate(Random &)const;
    void getShuffledTemplateIndexes(Random &)const;
    void size(void)const;
    bool isValid(void)const;
};
