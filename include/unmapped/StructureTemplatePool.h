#pragma once

#include <utility>
#include "../bedrock/util/Random.h"
#include <memory>
#include "./StructurePoolElement.h"
#include <vector>
#include <string>


class StructureTemplatePool {

public:

    ~StructureTemplatePool();
    StructureTemplatePool();
    StructureTemplatePool(std::string, std::string, std::vector<std::pair<StructurePoolElement const*, int>, std::allocator<std::pair<StructurePoolElement const*, int>>> &);
    void getTemplate(unsigned long)const;
    std::string getFallback()const;
    void getRandomTemplate(Random &)const;
    void getShuffledTemplateIndexes(Random &)const;
    std::string getName()const;
    void size()const;
    bool isValid()const;
};
