#pragma once

#include "./StructureManager.h"
#include <memory>
#include "./LegacyStructureTemplate.h"
#include <vector>
#include "./StructurePoolBlockTagRule.h"
#include <string>


namespace StructurePoolElement {

class LazyTemplate {

public:

    ~LazyTemplate();
    LazyTemplate(StructureManager &, std::string const&, std::vector<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>, std::allocator<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>>> const*);
    void _findJigsawBlocks(LegacyStructureTemplate &, std::vector<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>, std::allocator<std::unique_ptr<StructurePoolBlockTagRule, std::default_delete<StructurePoolBlockTagRule>>>> const*);
};

}