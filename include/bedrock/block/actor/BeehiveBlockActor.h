#pragma once

#include "../../actor/unmapped/ActorDefinitionIdentifier.h"
#include "BlockActor.h"
#include "../../nbt/CompoundTag.h"


class BeehiveBlockActor : BlockActor {

public:
    class Occupant;

    static long TypeId;
    static long MAX_OCCUPANCY;
    static std::string TypeString;

    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    ~BeehiveBlockActor();
    virtual void tick(BlockSource &);
    virtual void save(CompoundTag &)const;
    bool isFullyOccupied();
    void _revive(BlockSource &, BeehiveBlockActor::Occupant const&, unsigned char);
    void getNumberOfOccupants()const;
    void _isUsableAsSpawnBlock(BlockSource &, unsigned char);
    void evictAll(BlockSource &, bool);
    void _trySpawnBees(BlockSource &);
    void _findFreeDirections(BlockSource &, unsigned char, unsigned long);
    BeehiveBlockActor(BlockPos const&);
    void disableBeeSpawn();
    void saveUserData(CompoundTag &)const;
    void tryAdmit(Actor &);
    class Occupant {

    public:
        ~Occupant();
        Occupant(BeehiveBlockActor::Occupant &&);
        Occupant(ActorDefinitionIdentifier, CompoundTag, unsigned int);
    };
};
