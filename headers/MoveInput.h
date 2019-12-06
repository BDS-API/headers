#pragma once

class MoveInput {

public:
    virtual ~MoveInput();
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
    void wantsUp(void)const;
    void wantsUpSlow(void)const;
    void wantsDown(void)const;
    void wantsDownSlow(void)const;
    bool isJumping(void)const;
    bool isSneaking(void)const;
    bool isDescendScaffolding(void)const;
    bool isSneakToggleButtonDown(void)const;
    bool isSneakDown(void)const;
    bool isAutoJumpingInWater(void)const;
    bool isAscendScaffolding(void)const;
    void MoveInput(void);
};
