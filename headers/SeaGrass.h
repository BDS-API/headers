#pragma once

class SeaGrass : BlockLegacy {

public:
    virtual ~SeaGrass();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isValidAuxValue(int)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canBeSilkTouched(void)const;

    void SeaGrass(std::string const&, int);
    void checkAlive(BlockSource &, BlockPos const&)const;
    void trySpawnSeaGrass(BlockSource &, BlockPos const&);
};
