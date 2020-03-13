#pragma once



class MoveInput {

public:
    ~MoveInput(); // _ZN9MoveInputD2Ev
    virtual void tick(Player &); // _ZN9MoveInput4tickER6Player
    virtual void render(float); // _ZN9MoveInput6renderEf
    virtual void setKey(int, bool); // _ZN9MoveInput6setKeyEib
    virtual void clearInputState(); // _ZN9MoveInput15clearInputStateEv
    virtual void clearMovementState(); // _ZN9MoveInput18clearMovementStateEv
    virtual void allowPicking(float, float); // _ZN9MoveInput12allowPickingEff
    virtual void setJumping(bool); // _ZN9MoveInput10setJumpingEb
    virtual void setAutoJumpingInWater(bool); // _ZN9MoveInput21setAutoJumpingInWaterEb
    virtual bool isChangeHeight()const; // _ZNK9MoveInput14isChangeHeightEv
    virtual void setSneakDown(bool); // _ZN9MoveInput12setSneakDownEb
    virtual bool isPlayerMoving()const; // _ZNK9MoveInput14isPlayerMovingEv
    void scaleMoveVector(float); // _ZN9MoveInput15scaleMoveVectorEf
    void getMoveVector()const; // _ZNK9MoveInput13getMoveVectorEv
    void getLookDelta()const; // _ZNK9MoveInput12getLookDeltaEv
    bool wantsUp()const; // _ZNK9MoveInput7wantsUpEv
    bool wantsUpSlow()const; // _ZNK9MoveInput11wantsUpSlowEv
    bool wantsDown()const; // _ZNK9MoveInput9wantsDownEv
    bool wantsDownSlow()const; // _ZNK9MoveInput13wantsDownSlowEv
    bool isJumping()const; // _ZNK9MoveInput9isJumpingEv
    bool isSneaking()const; // _ZNK9MoveInput10isSneakingEv
    bool isDescendScaffolding()const; // _ZNK9MoveInput20isDescendScaffoldingEv
    bool isSneakToggleButtonDown()const; // _ZNK9MoveInput23isSneakToggleButtonDownEv
    bool isSneakDown()const; // _ZNK9MoveInput11isSneakDownEv
    bool isAutoJumpingInWater()const; // _ZNK9MoveInput20isAutoJumpingInWaterEv
    bool isAscendScaffolding()const; // _ZNK9MoveInput19isAscendScaffoldingEv
    MoveInput(); // _ZN9MoveInputC2Ev
};
