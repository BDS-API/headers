#pragma once



class LootTableContext {

public:
    class Builder;

    ~LootTableContext(); // _ZN16LootTableContextD2Ev
    LootTableContext(float, Level *, Actor *, Player *, ActorDamageSource const*, float); // _ZN16LootTableContextC2EfP5LevelP5ActorP6PlayerPK17ActorDamageSourcef
    void getThisEntity()const; // _ZNK16LootTableContext13getThisEntityEv
    void getKillerPlayer()const; // _ZNK16LootTableContext15getKillerPlayerEv
    void getKillerPet()const; // _ZNK16LootTableContext12getKillerPetEv
    void getLevel()const; // _ZNK16LootTableContext8getLevelEv
    void getKillerEntity()const; // _ZNK16LootTableContext15getKillerEntityEv
    void getDeathSource()const; // _ZNK16LootTableContext14getDeathSourceEv
    void addVisitedTable(LootTable const*); // _ZN16LootTableContext15addVisitedTableEPK9LootTable
    void removeVisitedTable(LootTable const*); // _ZN16LootTableContext18removeVisitedTableEPK9LootTable
    void getLuck()const; // _ZNK16LootTableContext7getLuckEv
//  void getEntity(ActorTarget)const; //TODO: incomplete function definition // _ZNK16LootTableContext9getEntityE11ActorTarget
    void getExplosionRadius()const; // _ZNK16LootTableContext18getExplosionRadiusEv
    class Builder {

    public:
        Builder(Level *); // _ZN16LootTableContext7BuilderC2EP5Level
        void withLuck(float); // _ZN16LootTableContext7Builder8withLuckEf
        void withThisEntity(Actor *); // _ZN16LootTableContext7Builder14withThisEntityEP5Actor
        void withKillerPlayer(Player *); // _ZN16LootTableContext7Builder16withKillerPlayerEP6Player
        void withDeathSource(ActorDamageSource const*); // _ZN16LootTableContext7Builder15withDeathSourceEPK17ActorDamageSource
        void withExplosionRadius(float); // _ZN16LootTableContext7Builder19withExplosionRadiusEf
        void create()const; // _ZNK16LootTableContext7Builder6createEv
    };
};
