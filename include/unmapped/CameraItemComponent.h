#pragma once



class CameraItemComponent {

public:
    ~CameraItemComponent();
    void releaseUsing(ItemStack &, Player &, int);
    void init(Json::Value &);
    void _shouldTakePicture(Player &);
    void _tryPlace(ItemStack const&, Actor &, BlockPos const&, unsigned char, Vec3 &)const;
    void takePictureNow(Player &, Actor *, Actor *);
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&);
    void use(ItemStack &, Player &);
    CameraItemComponent(Item &);
    bool canPlace(ItemStack const&, Actor &, BlockPos const&, unsigned char)const;
};
