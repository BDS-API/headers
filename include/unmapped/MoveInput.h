#pragma once



class MoveInput {

public:
    virtual void setSneakDown(bool);
    virtual void tick(Player &);
    virtual void clearMovementState();
    virtual bool isChangeHeight()const;
    virtual bool isPlayerMoving()const;
    virtual void render(float);
    virtual void allowPicking(float, float);
    virtual void setAutoJumpingInWater(bool);
    virtual void setKey(int, bool);
    virtual void clearInputState();
    ~MoveInput();
    virtual void setJumping(bool);
    bool wantsDownSlow()const;
    MoveInput();
    void scaleMoveVector(float);
    bool isJumping()const;
    bool isAutoJumpingInWater()const;
    bool isSneaking()const;
    void getMoveVector()const;
    bool wantsUpSlow()const;
    bool wantsDown()const;
    bool isAscendScaffolding()const;
    bool isSneakToggleButtonDown()const;
    void getLookDelta()const;
    bool wantsUp()const;
    bool isSneakDown()const;
    bool isDescendScaffolding()const;
};
