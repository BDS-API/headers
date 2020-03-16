#pragma once

#include "../../../unmapped/OnHitSubcomponent.h"


class ActorDefinitionEventSubcomponent : public OnHitSubcomponent {

public:
    virtual ~ActorDefinitionEventSubcomponent(); // _ZN32ActorDefinitionEventSubcomponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void readfromJSON(Json::Value &); // _ZN32ActorDefinitionEventSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK32ActorDefinitionEventSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN32ActorDefinitionEventSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN32ActorDefinitionEventSubcomponent19getSubcomponentNameEv
    ActorDefinitionEventSubcomponent(); // _ZN32ActorDefinitionEventSubcomponentC2Ev
};
