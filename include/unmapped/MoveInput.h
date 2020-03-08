#pragma once

#include "../bedrock/actor/Player"


class MoveInput {

public:
    virtual MoveInput::~MoveInput();
    virtual void tick(Player &);
    virtual void render(float);
    virtual void setKey(int, bool);
    virtual void clearInputState(void);
    virtual void clearMovementState(void);
    virtual void allowPicking(float, float);
    virtual void setJumping(bool);
    virtual void setAutoJumpingInWater(bool);
    virtual bool isChangeHeight(void)const;
    virtual void setSneakDown(bool);
    virtual bool isPlayerMoving(void)const;

    void scaleMoveVector(float);
    void getMoveVector(void)const;
    void getLookDelta(void)const;
    bool wantsUp(void)const;
    bool wantsUpSlow(void)const;
    bool wantsDown(void)const;
    bool wantsDownSlow(void)const;
    bool isJumping(void)const;
    bool isSneaking(void)const;
    bool isDescendScaffolding(void)const;
    bool isSneakToggleButtonDown(void)const;
    bool isSneakDown(void)const;
    bool isAutoJumpingInWater(void)const;
    bool isAscendScaffolding(void)const;
    MoveInput(void);
};
