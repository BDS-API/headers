#pragma once

class Boat : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Boat();
    virtual void remove(void);
    virtual void normalTick(void);
    virtual void addRider(Actor &);
    virtual void getExitTip(std::string const&, InputMode)const;
    virtual void getShadowHeightOffs(void);
    virtual void getShadowRadius(void)const;
    virtual void onAboveBubbleColumn(bool);
    virtual bool isPickable(void);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void getControllingPlayer(void)const;
    virtual bool canAddRider(Actor &)const;
    virtual void getRiderYRotation(Actor const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);

    void Boat(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void destroy(Actor *);
    void tickBubbleColumn(void);
    void getBubbleTime(void);
    void setBubbleTime(int);
    void getWoodID(void)const;
    void getRowingTime(Side)const;
    void getPaddle(Side);
    void _float(void);
    void _control(void);
    void getPaddle(Side)const;
    void getRowingTime(Side, float)const;
    void setRowingTime(Side, float);
    void setPaddleForce(Side, float);
    void setPaddleState(Side, bool);
    void computePaddleForcesBasedOnGaze(Vec3 &, float &, float &, float, float);
    void _computePaddleForce(float &, float &, float, float);
    bool canExitBoat(void)const;
    void getBubbleAngle(float);
    void _calculatePaddleForce(Side)const;
    void _addPaddleTime(Side, float);
    void _paddleControl(Side, Vec3 &, Vec3 &);
    void _isInAir(void)const;
    void _resetPaddleToRest(Side);
};
