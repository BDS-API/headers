#pragma once

#include <string>


class JigsawBlockInfo {

public:
    JigsawBlockInfo(BlockPos const&, Block const*, Block const*, std::string, std::string);
    ~JigsawBlockInfo();
    JigsawBlockInfo(JigsawBlockInfo &&);
};
