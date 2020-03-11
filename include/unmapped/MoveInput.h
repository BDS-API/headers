#pragma once

#include "../bedrock/actor/Player.h"


class MoveInput {

public:
    virtual ~MoveInput();
    virtual void tick(Player &);
    virtual void render(float);
    virtual void setKey(int, bool);
    virtual void clearInputState();
    virtual void clearMovementState();
    virtual void allowPicking(float, float);
    virtual void setJumping(bool);
    virtual void setAutoJumpingInWater(bool);
    virtual bool isChangeHeight()const;
    virtual void setSneakDown(bool);
    virtual bool isPlayerMoving()const;

    void scaleMoveVector(float);
    void getMoveVector()const;
    void getLookDelta()const;
    bool wantsUp()const;
    bool wantsUpSlow()const;
    bool wantsDown()const;
    bool wantsDownSlow()const;
    bool isJumping()const;
    bool isSneaking()const;
    bool isDescendScaffolding()const;
    bool isSneakToggleButtonDown()const;
    bool isSneakDown()const;
    bool isAutoJumpingInWater()const;
    bool isAscendScaffolding()const;
    MoveInput();
};
