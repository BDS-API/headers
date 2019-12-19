#pragma once

class BeehiveBlockActor : BlockActor {

public:
    static long TypeId;
    static long MAX_OCCUPANCY;
    static long TypeString[abi:cxx11];

    virtual ~BeehiveBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);

    void BeehiveBlockActor(BlockPos const&);
    void _trySpawnBees(BlockSource &);
    void saveUserData(CompoundTag &)const;
    void tryAdmit(Actor &);
    bool isFullyOccupied(void);
    void evictAll(BlockSource &, bool);
    void _findFreeDirections(BlockSource &, unsigned char, unsigned long);
    void _revive(BlockSource &, BeehiveBlockActor::Occupant const&, unsigned char);
    void disableBeeSpawn(void);
    void _isUsableAsSpawnBlock(BlockSource &, unsigned char);
};
