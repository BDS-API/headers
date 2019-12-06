#pragma once

class SeaAnemoneFeature : Feature {

public:
    virtual ~SeaAnemoneFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void SeaAnemoneFeature(void);
};
