#pragma once

class LogBlock : RotatedPillarBlock {

public:
    virtual ~LogBlock();
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking(void)const;

    void LogBlock(std::string const&, int);
};
