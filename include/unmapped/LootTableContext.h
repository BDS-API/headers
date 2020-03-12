#pragma once



class LootTableContext {

public:
    class Builder;

    void getKillerPet()const;
    void removeVisitedTable(LootTable const*);
    void getKillerEntity()const;
    LootTableContext(float, Level *, Actor *, Player *, ActorDamageSource const*, float);
    void getDeathSource()const;
    void addVisitedTable(LootTable const*);
    void getExplosionRadius()const;
    void getLuck()const;
    ~LootTableContext();
    void getThisEntity()const;
//  void getEntity(ActorTarget)const; //TODO: incomplete function definition
    void getKillerPlayer()const;
    void getLevel()const;
    class Builder {

    public:
        void withKillerPlayer(Player *);
        void create()const;
        Builder(Level *);
        void withThisEntity(Actor *);
        void withLuck(float);
        void withExplosionRadius(float);
        void withDeathSource(ActorDamageSource const*);
    };
};
