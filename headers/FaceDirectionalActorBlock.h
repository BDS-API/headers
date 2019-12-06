#pragma once

class FaceDirectionalActorBlock : ActorBlock {

public:
    virtual ~FaceDirectionalActorBlock();
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    void FaceDirectionalActorBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&, bool, float);
};
