#pragma once

#include "BlockActor.h"
#include "../../actor/unmapped/ActorDefinitionIdentifier.h"
#include "../../nbt/CompoundTag.h"


class BeehiveBlockActor : BlockActor {

public:
    class Occupant;

    static long TypeId;
    static long MAX_OCCUPANCY;
    static std::string TypeString;

    ~BeehiveBlockActor(); // _ZN17BeehiveBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN17BeehiveBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK17BeehiveBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN17BeehiveBlockActor4tickER11BlockSource
    BeehiveBlockActor(BlockPos const&); // _ZN17BeehiveBlockActorC2ERK8BlockPos
    void _trySpawnBees(BlockSource &); // _ZN17BeehiveBlockActor13_trySpawnBeesER11BlockSource
    void saveUserData(CompoundTag &)const; // _ZNK17BeehiveBlockActor12saveUserDataER11CompoundTag
    void tryAdmit(Actor &); // _ZN17BeehiveBlockActor8tryAdmitER5Actor
    bool isFullyOccupied(); // _ZN17BeehiveBlockActor15isFullyOccupiedEv
    void evictAll(BlockSource &, bool); // _ZN17BeehiveBlockActor8evictAllER11BlockSourceb
    void _findFreeDirections(BlockSource &, unsigned char, unsigned long); // _ZN17BeehiveBlockActor19_findFreeDirectionsER11BlockSourcehm
    void _revive(BlockSource &, BeehiveBlockActor::Occupant const&, unsigned char); // _ZN17BeehiveBlockActor7_reviveER11BlockSourceRKNS_8OccupantEh
    void disableBeeSpawn(); // _ZN17BeehiveBlockActor15disableBeeSpawnEv
    void getNumberOfOccupants()const; // _ZNK17BeehiveBlockActor20getNumberOfOccupantsEv
    void _isUsableAsSpawnBlock(BlockSource &, unsigned char); // _ZN17BeehiveBlockActor21_isUsableAsSpawnBlockER11BlockSourceh
    class Occupant {

    public:
        Occupant(ActorDefinitionIdentifier, CompoundTag, unsigned int); // _ZN17BeehiveBlockActor8OccupantC2E25ActorDefinitionIdentifier11CompoundTagj
        ~Occupant(); // _ZN17BeehiveBlockActor8OccupantD2Ev
        Occupant(BeehiveBlockActor::Occupant &&); // _ZN17BeehiveBlockActor8OccupantC2EOS0_
    };
};
