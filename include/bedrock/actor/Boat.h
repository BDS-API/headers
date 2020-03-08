#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"


class Boat : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual Boat::~Boat()
    virtual void remove();
    virtual void normalTick();
    virtual void addRider(Actor &);
    virtual void getExitTip(std::string const&, InputMode)const;
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
    void getRowingTime(Side)const;
    void getPaddle(Side);
    void _float();
    void _control();
    void getPaddle(Side)const;
    void getRowingTime(Side, float)const;
    void setRowingTime(Side, float);
    void setPaddleForce(Side, float);
    void setPaddleState(Side, bool);
    void computePaddleForcesBasedOnGaze(Vec3 &, float &, float &, float, float);
    void _computePaddleForce(float &, float &, float, float);
    bool canExitBoat()const;
    void getBubbleAngle(float);
    void _calculatePaddleForce(Side)const;
    void _addPaddleTime(Side, float);
    void _paddleControl(Side, Vec3 &, Vec3 &);
    void _isInAir()const;
    void _resetPaddleToRest(Side);
};
