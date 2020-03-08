#pragma once

#include "../bedrock/item/ItemStack"
#include "../json/Value"
#include "../bedrock/actor/Actor"
#include "../bedrock/util/Vec3"
#include "../bedrock/util/BlockPos"
#include "../bedrock/item/Item"
#include "../bedrock/actor/Player"


class CameraItemComponent {

public:
    CameraItemComponent::~CameraItemComponent()

    CameraItemComponent(Item &);
    void init(Json::Value &);
    void takePictureNow(Player &, Actor *, Actor *);
    void use(ItemStack &, Player &);
    void _shouldTakePicture(Player &);
    void releaseUsing(ItemStack &, Player &, int);
    void _tryPlace(ItemStack const&, Actor &, BlockPos const&, unsigned char, Vec3 &)const;
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&);
    bool canPlace(ItemStack const&, Actor &, BlockPos const&, unsigned char)const;
};
