#pragma once

#include "BlockActor.h"
#include <string>
#include "../../../unmapped/DataLoadHelper.h"
#include "../../actor/unmapped/ActorDefinitionIdentifier.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"


class BeehiveBlockActor : BlockActor {

public:
    class Occupant;

    static long TypeId;
    static long MAX_OCCUPANCY;
    static std::string TypeString;

    virtual void tick(BlockSource &);
    ~BeehiveBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    void _trySpawnBees(BlockSource &);
    void _revive(BlockSource &, BeehiveBlockActor::Occupant const&, unsigned char);
    void _isUsableAsSpawnBlock(BlockSource &, unsigned char);
    void getNumberOfOccupants()const;
    void _findFreeDirections(BlockSource &, unsigned char, unsigned long);
    void tryAdmit(Actor &);
    void evictAll(BlockSource &, bool);
    void saveUserData(CompoundTag &)const;
    BeehiveBlockActor(BlockPos const&);
    void disableBeeSpawn();
    bool isFullyOccupied();
    class Occupant {

    public:
        Occupant(BeehiveBlockActor::Occupant &&);
        ~Occupant();
        Occupant(ActorDefinitionIdentifier, CompoundTag, unsigned int);
    };
};
