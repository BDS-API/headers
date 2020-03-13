#pragma once

#include "MoveInput.h"


class MoveInputHandler : MoveInput {

public:
    ~MoveInputHandler(); // _ZN16MoveInputHandlerD2Ev
    virtual void tick(Player &); // _ZN16MoveInputHandler4tickER6Player
    virtual void clearInputState(); // _ZN16MoveInputHandler15clearInputStateEv
    virtual bool isChangeHeight()const; // _ZNK16MoveInputHandler14isChangeHeightEv
    virtual bool isPlayerMoving()const; // _ZNK16MoveInputHandler14isPlayerMovingEv
    virtual void fillInputPacket(PlayerAuthInputPacket &); // _ZN16MoveInputHandler15fillInputPacketER21PlayerAuthInputPacket
    MoveInputHandler(); // _ZN16MoveInputHandlerC2Ev
    void _updateXY(bool); // _ZN16MoveInputHandler9_updateXYEb
    bool isMovingForward()const; // _ZNK16MoveInputHandler15isMovingForwardEv
    bool isMovingLeft()const; // _ZNK16MoveInputHandler12isMovingLeftEv
    bool isMovingRight()const; // _ZNK16MoveInputHandler13isMovingRightEv
    bool wantsMoveForward()const; // _ZNK16MoveInputHandler16wantsMoveForwardEv
    bool isJumpDown()const; // _ZNK16MoveInputHandler10isJumpDownEv
    void setSneakPersistence(bool); // _ZN16MoveInputHandler19setSneakPersistenceEb
    void setGazeDirection(Vec3 const&); // _ZN16MoveInputHandler16setGazeDirectionERK4Vec3
    void getGazeDirection()const; // _ZNK16MoveInputHandler16getGazeDirectionEv
    void _toggleSneak(); // _ZN16MoveInputHandler12_toggleSneakEv
//  void _getLookBitmask(MoveInputHandler::LookDirection); //TODO: incomplete function definition // _ZN16MoveInputHandler15_getLookBitmaskENS_13LookDirectionE
//  void _getLookBitmask(MoveInputHandler::LookDirection, MoveInputHandler::LookDirection); //TODO: incomplete function definition // _ZN16MoveInputHandler15_getLookBitmaskENS_13LookDirectionES0_
    void _updateGGVector(short, float, float, float); // _ZN16MoveInputHandler15_updateGGVectorEsfff
    void _updateMoveVector(float, float); // _ZN16MoveInputHandler17_updateMoveVectorEff
};
