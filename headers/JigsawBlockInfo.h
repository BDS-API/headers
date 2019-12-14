#pragma once

class JigsawBlockInfo {

public:

    void JigsawBlockInfo(JigsawBlockInfo&&);
    void JigsawBlockInfo(BlockPos const&, Block const*, Block const*, std::string, std::string);
};
