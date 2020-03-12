#pragma once



class TeleportComponent {

public:
    void getTargetTeleportChance();
    void getTargetDistance();
    void getTeleportTime();
    void setTeleportTime(int);
    void randomTeleport(Actor &);
    TeleportComponent(TeleportComponent &&);
    void teleport(Actor &, Vec3 const&);
    void getMaxTeleportTime();
    TeleportComponent();
    void teleportTowards(Actor &, Actor const&);
    void getLightTeleportChance();
    void getDarkTeleportChance();
    void getMinTeleportTime();
    void getRandomTeleports();
    void initFromDefinition(TeleportDescription const&);
    void initFromDefinition(Actor &);
};
