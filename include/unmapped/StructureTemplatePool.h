#pragma once

#include <string>
#include <vector>
#include "../bedrock/util/Random.h"
#include "StructurePoolElement.h"
#include <utility>


class StructureTemplatePool {

public:
    void getTemplate(unsigned long)const;
    void size()const;
    void getShuffledTemplateIndexes(Random &)const;
    std::string getName()const;
    void getRandomTemplate(Random &)const;
    bool isValid()const;
    ~StructureTemplatePool();
    std::string getFallback()const;
    StructureTemplatePool();
    StructureTemplatePool(std::string, std::string, std::vector<std::pair<StructurePoolElement const*, int>> &);
};
