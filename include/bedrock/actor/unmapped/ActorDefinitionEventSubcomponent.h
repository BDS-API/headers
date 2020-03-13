#pragma once

#include "../../../unmapped/OnHitSubcomponent.h"


class ActorDefinitionEventSubcomponent : OnHitSubcomponent {

public:
    ~ActorDefinitionEventSubcomponent(); // _ZN32ActorDefinitionEventSubcomponentD2Ev
    virtual void readfromJSON(Json::Value &); // _ZN32ActorDefinitionEventSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK32ActorDefinitionEventSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN32ActorDefinitionEventSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN32ActorDefinitionEventSubcomponent19getSubcomponentNameEv
    ActorDefinitionEventSubcomponent(); // _ZN32ActorDefinitionEventSubcomponentC2Ev
};
