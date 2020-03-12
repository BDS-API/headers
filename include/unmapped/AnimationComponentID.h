#pragma once



class AnimationComponentID {

public:
//  AnimationComponentID(ActorUniqueID const&, unsigned short, AttachableSlotIndex); //TODO: incomplete function definition
    void operator<(AnimationComponentID const&)const;
    AnimationComponentID();
    void getHash()const;
    void operator==(AnimationComponentID const&)const;
};
