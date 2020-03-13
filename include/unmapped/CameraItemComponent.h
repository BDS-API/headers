#pragma once



class CameraItemComponent {

public:
    ~CameraItemComponent(); // _ZN19CameraItemComponentD2Ev
    CameraItemComponent(Item &); // _ZN19CameraItemComponentC2ER4Item
    void init(Json::Value &); // _ZN19CameraItemComponent4initERN4Json5ValueE
    void takePictureNow(Player &, Actor *, Actor *); // _ZN19CameraItemComponent14takePictureNowER6PlayerP5ActorS3_
    void use(ItemStack &, Player &); // _ZN19CameraItemComponent3useER9ItemStackR6Player
    void _shouldTakePicture(Player &); // _ZN19CameraItemComponent18_shouldTakePictureER6Player
    void releaseUsing(ItemStack &, Player &, int); // _ZN19CameraItemComponent12releaseUsingER9ItemStackR6Playeri
    void _tryPlace(ItemStack const&, Actor &, BlockPos const&, unsigned char, Vec3 &)const; // _ZNK19CameraItemComponent9_tryPlaceERK9ItemStackR5ActorRK8BlockPoshR4Vec3
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&); // _ZN19CameraItemComponent5useOnER9ItemStackR5ActorRK8BlockPoshRK4Vec3
    bool canPlace(ItemStack const&, Actor &, BlockPos const&, unsigned char)const; // _ZNK19CameraItemComponent8canPlaceERK9ItemStackR5ActorRK8BlockPosh
};
