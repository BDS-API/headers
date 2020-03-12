#pragma once

#include "../bedrock/network/packet/PlayerAuthInputPacket.h"
#include "../bedrock/actor/Player.h"
#include "MoveInput.h"
#include "../bedrock/util/Vec3.h"


class MoveInputHandler : MoveInput {

public:
    virtual void tick(Player &);
    ~MoveInputHandler();
    virtual bool isPlayerMoving()const;
    virtual bool isChangeHeight()const;
    virtual void fillInputPacket(PlayerAuthInputPacket &);
    virtual void clearInputState();
    void setGazeDirection(Vec3 const&);
    bool isMovingRight()const;
    bool isMovingForward()const;
//  void _getLookBitmask(MoveInputHandler::LookDirection); //TODO: incomplete function definition
    bool isJumpDown()const;
    void _updateGGVector(short, float, float, float);
    MoveInputHandler();
    bool wantsMoveForward()const;
    void setSneakPersistence(bool);
    bool isMovingLeft()const;
    void _toggleSneak();
//  void _getLookBitmask(MoveInputHandler::LookDirection, MoveInputHandler::LookDirection); //TODO: incomplete function definition
    void _updateMoveVector(float, float);
    void getGazeDirection()const;
    void _updateXY(bool);
};
