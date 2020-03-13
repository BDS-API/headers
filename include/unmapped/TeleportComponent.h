#pragma once



class TeleportComponent {

public:
    TeleportComponent(TeleportComponent &&); // _ZN17TeleportComponentC2EOS_
    TeleportComponent(); // _ZN17TeleportComponentC2Ev
    void initFromDefinition(Actor &); // _ZN17TeleportComponent18initFromDefinitionER5Actor
    void initFromDefinition(TeleportDescription const&); // _ZN17TeleportComponent18initFromDefinitionERK19TeleportDescription
    void teleport(Actor &, Vec3 const&); // _ZN17TeleportComponent8teleportER5ActorRK4Vec3
    void randomTeleport(Actor &); // _ZN17TeleportComponent14randomTeleportER5Actor
    void teleportTowards(Actor &, Actor const&); // _ZN17TeleportComponent15teleportTowardsER5ActorRKS0_
    void getRandomTeleports(); // _ZN17TeleportComponent18getRandomTeleportsEv
    void getMinTeleportTime(); // _ZN17TeleportComponent18getMinTeleportTimeEv
    void getMaxTeleportTime(); // _ZN17TeleportComponent18getMaxTeleportTimeEv
    void getTargetDistance(); // _ZN17TeleportComponent17getTargetDistanceEv
    void getTargetTeleportChance(); // _ZN17TeleportComponent23getTargetTeleportChanceEv
    void getLightTeleportChance(); // _ZN17TeleportComponent22getLightTeleportChanceEv
    void getDarkTeleportChance(); // _ZN17TeleportComponent21getDarkTeleportChanceEv
    void getTeleportTime(); // _ZN17TeleportComponent15getTeleportTimeEv
    void setTeleportTime(int); // _ZN17TeleportComponent15setTeleportTimeEi
};
