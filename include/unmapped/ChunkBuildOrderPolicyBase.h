#pragma once



class ChunkBuildOrderPolicyBase {

public:
    virtual ~ChunkBuildOrderPolicyBase(); // _ZN25ChunkBuildOrderPolicyBaseD2Ev
    virtual void __fake_function0(); // fake
    virtual void registerForPositionUpdates(); // _ZN25ChunkBuildOrderPolicyBase26registerForPositionUpdatesEv
    virtual void updatePosition(unsigned int, ChunkPos &); // _ZN25ChunkBuildOrderPolicyBase14updatePositionEjR8ChunkPos
    virtual void unregisterForPositionUpdates(unsigned int); // _ZN25ChunkBuildOrderPolicyBase28unregisterForPositionUpdatesEj
    ChunkBuildOrderPolicyBase(); // _ZN25ChunkBuildOrderPolicyBaseC2Ev
};
