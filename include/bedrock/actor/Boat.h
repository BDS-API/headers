#pragma once

#include <string>
#include "Actor.h"


class Boat : Actor {

public:
    class Paddle;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN4Boat15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN4Boat21reloadHardcodedClientEN5Actor20InitializationMethodERK20VariantParameterList
    ~Boat(); // _ZN4BoatD2Ev
    virtual void remove(); // _ZN4Boat6removeEv
    virtual void normalTick(); // _ZN4Boat10normalTickEv
    virtual void addRider(Actor &); // _ZN4Boat8addRiderER5Actor
//  virtual void getExitTip(std::string const&, InputMode)const; //TODO: incomplete function definition // _ZNK4Boat10getExitTipERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE9InputMode
    virtual void getShadowHeightOffs(); // _ZN4Boat19getShadowHeightOffsEv
    virtual void getShadowRadius()const; // _ZNK4Boat15getShadowRadiusEv
    virtual void onAboveBubbleColumn(bool); // _ZN4Boat19onAboveBubbleColumnEb
    virtual bool isPickable(); // _ZN4Boat10isPickableEv
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK4Boat16isInvulnerableToERK17ActorDamageSource
    virtual void getControllingPlayer()const; // _ZNK4Boat20getControllingPlayerEv
    virtual bool canAddRider(Actor &)const; // _ZNK4Boat11canAddRiderER5Actor
    virtual void getRiderYRotation(Actor const&)const; // _ZNK4Boat17getRiderYRotationERK5Actor
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN4Boat5_hurtERK17ActorDamageSourceibb
    Boat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN4BoatC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void destroy(Actor *); // _ZN4Boat7destroyEP5Actor
    void tickBubbleColumn(); // _ZN4Boat16tickBubbleColumnEv
    void getBubbleTime(); // _ZN4Boat13getBubbleTimeEv
    void setBubbleTime(int); // _ZN4Boat13setBubbleTimeEi
    void getWoodID()const; // _ZNK4Boat9getWoodIDEv
//  void getRowingTime(Side)const; //TODO: incomplete function definition // _ZNK4Boat13getRowingTimeE4Side
//  void getPaddle(Side); //TODO: incomplete function definition // _ZN4Boat9getPaddleE4Side
    void _float(); // _ZN4Boat6_floatEv
    void _control(); // _ZN4Boat8_controlEv
//  void getPaddle(Side)const; //TODO: incomplete function definition // _ZNK4Boat9getPaddleE4Side
//  void getRowingTime(Side, float)const; //TODO: incomplete function definition // _ZNK4Boat13getRowingTimeE4Sidef
//  void setRowingTime(Side, float); //TODO: incomplete function definition // _ZN4Boat13setRowingTimeE4Sidef
//  void setPaddleForce(Side, float); //TODO: incomplete function definition // _ZN4Boat14setPaddleForceE4Sidef
//  void setPaddleState(Side, bool); //TODO: incomplete function definition // _ZN4Boat14setPaddleStateE4Sideb
    void computePaddleForcesBasedOnGaze(Vec3 &, float &, float &, float, float); // _ZN4Boat30computePaddleForcesBasedOnGazeER4Vec3RfS2_ff
    void _computePaddleForce(float &, float &, float, float); // _ZN4Boat19_computePaddleForceERfS0_ff
    bool canExitBoat()const; // _ZNK4Boat11canExitBoatEv
    std::string getExitText(bool)const; // _ZNK4Boat11getExitTextB5cxx11Eb
    void getBubbleAngle(float); // _ZN4Boat14getBubbleAngleEf
//  void _calculatePaddleForce(Side)const; //TODO: incomplete function definition // _ZNK4Boat21_calculatePaddleForceE4Side
//  void _addPaddleTime(Side, float); //TODO: incomplete function definition // _ZN4Boat14_addPaddleTimeE4Sidef
//  void _paddleControl(Side, Vec3 &, Vec3 &); //TODO: incomplete function definition // _ZN4Boat14_paddleControlE4SideR4Vec3S2_
    void _isInAir()const; // _ZNK4Boat8_isInAirEv
//  void _resetPaddleToRest(Side); //TODO: incomplete function definition // _ZN4Boat18_resetPaddleToRestE4Side
    class Paddle {

    public:
        Paddle(); // _ZN4Boat6PaddleC2Ev
    };
};
