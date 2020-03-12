#pragma once

#include "../bedrock/actor/Player.h"


class MoveInput {

public:
    virtual void setKey(int, bool);
    virtual void clearMovementState();
    virtual void allowPicking(float, float);
    virtual void clearInputState();
    virtual bool isPlayerMoving()const;
    ~MoveInput();
    virtual void tick(Player &);
    virtual void setJumping(bool);
    virtual void setAutoJumpingInWater(bool);
    virtual void setSneakDown(bool);
    virtual bool isChangeHeight()const;
    virtual void render(float);
    bool isAscendScaffolding()const;
    MoveInput();
    bool isAutoJumpingInWater()const;
    bool wantsDownSlow()const;
    bool wantsUpSlow()const;
    void getMoveVector()const;
    bool isDescendScaffolding()const;
    bool wantsUp()const;
    void scaleMoveVector(float);
    bool isSneakDown()const;
    bool isJumping()const;
    void getLookDelta()const;
    bool isSneaking()const;
    bool wantsDown()const;
    bool isSneakToggleButtonDown()const;
};
