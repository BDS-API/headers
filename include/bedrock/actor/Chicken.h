#pragma once

#include "Animal.h"


class Chicken : Animal {

public:
    ~Chicken(); // _ZN7ChickenD2Ev
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN7Chicken35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void _playStepSound(BlockPos const&, Block const&); // _ZN7Chicken14_playStepSoundERK8BlockPosRK5Block
    virtual void aiStep(); // _ZN7Chicken6aiStepEv
    virtual void useNewAi()const; // _ZNK7Chicken8useNewAiEv
    Chicken(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN7ChickenC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void getFlap()const; // _ZNK7Chicken7getFlapEv
    void getOFlap()const; // _ZNK7Chicken8getOFlapEv
    void getFlapSpeed()const; // _ZNK7Chicken12getFlapSpeedEv
    void getOFlapSpeed()const; // _ZNK7Chicken13getOFlapSpeedEv
};
