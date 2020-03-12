#pragma once

#include "Actor.h"
#include <string>


class Boat : Actor {

public:
    class Paddle;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void addRider(Actor &);
    ~Boat();
    virtual bool canAddRider(Actor &)const;
    virtual bool isPickable();
    virtual void remove();
    virtual void normalTick();
    virtual void getShadowHeightOffs();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void onAboveBubbleColumn(bool);
    virtual void getShadowRadius()const;
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void getControllingPlayer()const;
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getRiderYRotation(Actor const&)const;
//  virtual void getExitTip(std::string const&, InputMode)const; //TODO: incomplete function definition
    void tickBubbleColumn();
//  void _calculatePaddleForce(Side)const; //TODO: incomplete function definition
    void setBubbleTime(int);
//  void getRowingTime(Side)const; //TODO: incomplete function definition
//  void setPaddleForce(Side, float); //TODO: incomplete function definition
    std::string getExitText(bool)const;
    void _isInAir()const;
    Boat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
//  void _addPaddleTime(Side, float); //TODO: incomplete function definition
//  void getPaddle(Side); //TODO: incomplete function definition
//  void _paddleControl(Side, Vec3 &, Vec3 &); //TODO: incomplete function definition
    void _computePaddleForce(float &, float &, float, float);
    bool canExitBoat()const;
//  void setRowingTime(Side, float); //TODO: incomplete function definition
//  void getRowingTime(Side, float)const; //TODO: incomplete function definition
    void _control();
//  void _resetPaddleToRest(Side); //TODO: incomplete function definition
    void getBubbleTime();
//  void getPaddle(Side)const; //TODO: incomplete function definition
    void _float();
    void getWoodID()const;
    void destroy(Actor *);
    void computePaddleForcesBasedOnGaze(Vec3 &, float &, float &, float, float);
    void getBubbleAngle(float);
//  void setPaddleState(Side, bool); //TODO: incomplete function definition
    class Paddle {

    public:
        Paddle();
    };
};
