#pragma once

#include "../Actor"
#include "../../nbt/CompoundTag"


class ActorLegacySaveConverter {

public:

    void convertSave(Actor &, CompoundTag const&);
    void convertBoat(Actor &, CompoundTag const&);
    void convertOcelot(Actor &, CompoundTag const&);
    void convertVillager(Actor &, CompoundTag const&);
    void convertRabbit(Actor &, CompoundTag const&);
    void convertSkeleton(Actor &, CompoundTag const&);
    void convertZombie(Actor &, CompoundTag const&);
    void convertWolf(Actor &, CompoundTag const&);
    void convertHorse(Actor &, CompoundTag const&);
    void convertSquid(Actor &, CompoundTag const&);
    void convertSpider(Actor &, CompoundTag const&);
    void convertSlime(Actor &, CompoundTag const&);
    void convertSilverfish(Actor &, CompoundTag const&);
    void convertSheep(Actor &, CompoundTag const&);
    void convertPig(Actor &, CompoundTag const&);
    void convertSnowgolem(Actor &, CompoundTag const&);
    void convertCow(Actor &, CompoundTag const&);
    void convertMinecart(Actor &, CompoundTag const&);
    void convertMinecartHopper(Actor &, CompoundTag const&);
    void convertMinecartTNT(Actor &, CompoundTag const&);
    void convertEnderman(Actor &, CompoundTag const&);
    void convertCreeper(Actor &, CompoundTag const&);
    void convertChicken(Actor &, CompoundTag const&);
    void convertIronGolem(Actor &, CompoundTag const&);
    void convertZombieVillager(Actor &, CompoundTag const&);
    void genericConvert(Actor &, CompoundTag const&);
};
