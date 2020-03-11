#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "../../unmapped/VariantParameterList.h"
#include "damagesource/ActorDamageSource.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionGroup.h"
#include <string>


class Boat : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Boat();
    virtual void remove();
    virtual void normalTick();
    virtual void addRider(Actor &);
//  virtual void getExitTip(std::string const&, InputMode)const; //TODO: incomplete function definition
    virtual void getShadowHeightOffs();
    virtual void getShadowRadius()const;
    virtual void onAboveBubbleColumn(bool);
    virtual bool isPickable();
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void getControllingPlayer()const;
    virtual bool canAddRider(Actor &)const;
    virtual void getRiderYRotation(Actor const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);

    Boat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void destroy(Actor *);
    void tickBubbleColumn();
    void getBubbleTime();
    void setBubbleTime(int);
    void getWoodID()const;
//  void getRowingTime(Side)const; //TODO: incomplete function definition
//  void getPaddle(Side); //TODO: incomplete function definition
    void _float();
    void _control();
//  void getPaddle(Side)const; //TODO: incomplete function definition
//  void getRowingTime(Side, float)const; //TODO: incomplete function definition
//  void setRowingTime(Side, float); //TODO: incomplete function definition
//  void setPaddleForce(Side, float); //TODO: incomplete function definition
//  void setPaddleState(Side, bool); //TODO: incomplete function definition
    void computePaddleForcesBasedOnGaze(Vec3 &, float &, float &, float, float);
    void _computePaddleForce(float &, float &, float, float);
    bool canExitBoat()const;
    std::string getExitText(bool)const;
    void getBubbleAngle(float);
//  void _calculatePaddleForce(Side)const; //TODO: incomplete function definition
//  void _addPaddleTime(Side, float); //TODO: incomplete function definition
//  void _paddleControl(Side, Vec3 &, Vec3 &); //TODO: incomplete function definition
    void _isInAir()const;
//  void _resetPaddleToRest(Side); //TODO: incomplete function definition
};
