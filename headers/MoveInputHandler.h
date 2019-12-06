#pragma once

class MoveInputHandler : MoveInput {

public:
    virtual ~MoveInputHandler();
    virtual void tick(Player &);
    virtual void clearInputState(void);
    virtual bool isChangeHeight(void)const;
    virtual bool isPlayerMoving(void)const;
    virtual void fillInputPacket(PlayerAuthInputPacket &);

    void MoveInputHandler(void);
    void _updateXY(bool);
    bool isMovingForward(void)const;
    bool isMovingLeft(void)const;
    bool isMovingRight(void)const;
    void wantsMoveForward(void)const;
    bool isJumpDown(void)const;
    void setSneakPersistence(bool);
    void setGazeDirection(Vec3 const&);
    void getGazeDirection(void)const;
    void _toggleSneak(void);
    void _getLookBitmask(MoveInputHandler::LookDirection);
    void _getLookBitmask(MoveInputHandler::LookDirection, MoveInputHandler::LookDirection);
    void _updateGGVector(short, float, float, float);
    void _updateMoveVector(float, float);
};
