#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/network/packet/PlayerAuthInputPacket.h"
#include "../bedrock/actor/Player.h"
#include "./MoveInput.h"


class MoveInputHandler : MoveInput {

public:
    virtual ~MoveInputHandler();
    virtual void tick(Player &);
    virtual void clearInputState();
    virtual bool isChangeHeight()const;
    virtual bool isPlayerMoving()const;
    virtual void fillInputPacket(PlayerAuthInputPacket &);

    MoveInputHandler();
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
//  void _getLookBitmask(MoveInputHandler::LookDirection); //TODO: incomplete function definition
//  void _getLookBitmask(MoveInputHandler::LookDirection, MoveInputHandler::LookDirection); //TODO: incomplete function definition
    void _updateGGVector(short, float, float, float);
    void _updateMoveVector(float, float);
};
