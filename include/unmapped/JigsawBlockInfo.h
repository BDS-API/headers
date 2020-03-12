#pragma once

#include <string>
#include "Block.h"
#include "../bedrock/util/BlockPos.h"


class JigsawBlockInfo {

public:
    JigsawBlockInfo(BlockPos const&, Block const*, Block const*, std::string, std::string);
    JigsawBlockInfo(JigsawBlockInfo &&);
    ~JigsawBlockInfo();
};
