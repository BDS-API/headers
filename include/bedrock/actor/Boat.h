#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include <string>
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"


class Boat : Actor {

public:
    class Paddle;

    virtual void addRider(Actor &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getShadowRadius()const;
    virtual void getRiderYRotation(Actor const&)const;
    virtual void getShadowHeightOffs();
    virtual void getControllingPlayer()const;
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void onAboveBubbleColumn(bool);
//  virtual void getExitTip(std::string const&, InputMode)const; //TODO: incomplete function definition
    ~Boat();
    virtual bool canAddRider(Actor &)const;
    virtual void normalTick();
    virtual bool isPickable();
    virtual void remove();
//  void _resetPaddleToRest(Side); //TODO: incomplete function definition
    void getBubbleTime();
//  void setPaddleState(Side, bool); //TODO: incomplete function definition
    void _computePaddleForce(float &, float &, float, float);
    void setBubbleTime(int);
    void getWoodID()const;
//  void setPaddleForce(Side, float); //TODO: incomplete function definition
//  void _calculatePaddleForce(Side)const; //TODO: incomplete function definition
    void tickBubbleColumn();
    std::string getExitText(bool)const;
//  void _paddleControl(Side, Vec3 &, Vec3 &); //TODO: incomplete function definition
    void destroy(Actor *);
    void computePaddleForcesBasedOnGaze(Vec3 &, float &, float &, float, float);
//  void getPaddle(Side)const; //TODO: incomplete function definition
    void _isInAir()const;
//  void getPaddle(Side); //TODO: incomplete function definition
    void _control();
//  void getRowingTime(Side, float)const; //TODO: incomplete function definition
    bool canExitBoat()const;
    Boat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getBubbleAngle(float);
//  void _addPaddleTime(Side, float); //TODO: incomplete function definition
//  void setRowingTime(Side, float); //TODO: incomplete function definition
    void _float();
//  void getRowingTime(Side)const; //TODO: incomplete function definition
    class Paddle {

    public:
        Paddle();
    };
};
