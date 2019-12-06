#pragma once

class BedBlock : BlockLegacy {

public:
    static long BedBlock::HEAD_DIRECTION_OFFSETS;
    static long BedBlock::HEAD_PIECE_DATA;
    static long BedBlock::OCCUPIED_DATA;

    virtual ~BedBlock();
    virtual bool isInteractiveBlock(void)const;
    virtual bool canFillAtPos(BlockSource &, BlockPos const&, Block const&)const;
    virtual void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void updateEntityAfterFallOn(Actor &)const;
    virtual bool isBounceBlock(void)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void telemetryVariant(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual bool canBeSilkTouched(void)const;

    void BedBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void setOccupied(BlockSource &, BlockPos const&, bool);
    void findStandUpPosition(BlockSource &, BlockPos const&, int, BlockPos&);
};
