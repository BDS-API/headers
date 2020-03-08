#pragma once

#include "../bedrock/network/packet/PlayerAuthInputPacket"
#include "../bedrock/actor/Player"
#include "../bedrock/util/Vec3"


class MoveInputHandler : MoveInput {

public:
    virtual MoveInputHandler::~MoveInputHandler()
    virtual void tick(Player &);
    virtual void clearInputState();
    virtual bool isChangeHeight()const;
    virtual bool isPlayerMoving()const;
    virtual void fillInputPacket(PlayerAuthInputPacket &);

    MoveInputHandler(void);
    void _updateXY(bool);
    bool isMovingForward()const;
    bool isMovingLeft()const;
    bool isMovingRight()const;
    bool wantsMoveForward()const;
    bool isJumpDown()const;
    void setSneakPersistence(bool);
    void setGazeDirection(Vec3 const&);
    void getGazeDirection()const;
    void _toggleSneak();
    void _getLookBitmask(MoveInputHandler::LookDirection);
    void _getLookBitmask(MoveInputHandler::LookDirection, MoveInputHandler::LookDirection);
    void _updateGGVector(short, float, float, float);
    void _updateMoveVector(float, float);
};
