#pragma once

#include "../bedrock/util/Vec3.h"
#include "../json/Value.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/item/Item.h"


class CameraItemComponent {

public:
    virtual ~CameraItemComponent();

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
