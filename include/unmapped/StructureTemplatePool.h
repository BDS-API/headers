#pragma once

#include <string>
#include <vector>


class StructureTemplatePool {

public:
    void getShuffledTemplateIndexes(Random &)const;
    void getTemplate(unsigned long)const;
    std::string getName()const;
    ~StructureTemplatePool();
    bool isValid()const;
    void getRandomTemplate(Random &)const;
    std::string getFallback()const;
    StructureTemplatePool();
    StructureTemplatePool(std::string, std::string, std::vector<std::pair<StructurePoolElement const*, int>> &);
    void size()const;
};
