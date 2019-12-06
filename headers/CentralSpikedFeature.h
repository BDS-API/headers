#pragma once

class CentralSpikedFeature : Feature {

public:
    virtual ~CentralSpikedFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void CentralSpikedFeature(Block const&);
};
