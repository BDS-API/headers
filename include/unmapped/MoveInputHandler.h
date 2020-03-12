#pragma once

#include "MoveInput.h"


class MoveInputHandler : MoveInput {

public:
    virtual void fillInputPacket(PlayerAuthInputPacket &);
    virtual void clearInputState();
    virtual void tick(Player &);
    virtual bool isChangeHeight()const;
    ~MoveInputHandler();
    virtual bool isPlayerMoving()const;
    MoveInputHandler();
    void _updateMoveVector(float, float);
    void _updateXY(bool);
    void getGazeDirection()const;
    void _updateGGVector(short, float, float, float);
    bool isMovingRight()const;
    bool isMovingLeft()const;
    bool wantsMoveForward()const;
//  void _getLookBitmask(MoveInputHandler::LookDirection, MoveInputHandler::LookDirection); //TODO: incomplete function definition
    void setSneakPersistence(bool);
    void setGazeDirection(Vec3 const&);
    void _toggleSneak();
    bool isMovingForward()const;
//  void _getLookBitmask(MoveInputHandler::LookDirection); //TODO: incomplete function definition
    bool isJumpDown()const;
};
