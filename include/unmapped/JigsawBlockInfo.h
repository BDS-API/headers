#pragma once

class JigsawBlockInfo {

public:

    JigsawBlockInfo(JigsawBlockInfo&&);
    JigsawBlockInfo(BlockPos const&, Block const*, Block const*, std::string, std::string);
};
