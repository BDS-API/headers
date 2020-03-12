#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/item/Item.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include "../json/Value.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"


class CameraItemComponent {

public:
    ~CameraItemComponent();
    void use(ItemStack &, Player &);
    void releaseUsing(ItemStack &, Player &, int);
    CameraItemComponent(Item &);
    void _tryPlace(ItemStack const&, Actor &, BlockPos const&, unsigned char, Vec3 &)const;
    void takePictureNow(Player &, Actor *, Actor *);
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&);
    bool canPlace(ItemStack const&, Actor &, BlockPos const&, unsigned char)const;
    void _shouldTakePicture(Player &);
    void init(Json::Value &);
};
