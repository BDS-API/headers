#pragma once

#include "./Block.h"
#include "./JigsawBlockInfo.h"
#include "../bedrock/util/BlockPos.h"
#include <string>


class JigsawBlockInfo {

public:

    ~JigsawBlockInfo();
    JigsawBlockInfo(JigsawBlockInfo &&);
    JigsawBlockInfo(BlockPos const&, Block const*, Block const*, std::string, std::string);
};
