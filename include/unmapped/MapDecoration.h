#pragma once

#include <string>


class MapDecoration {

public:
    ~MapDecoration(); // _ZN13MapDecorationD2Ev
    MapDecoration(MapDecoration const&); // _ZN13MapDecorationC2ERKS_
    MapDecoration(); // _ZN13MapDecorationC2Ev
//  MapDecoration(MapDecoration::Type, signed const, signed const, signed const, std::string const&, Color const&); //TODO: incomplete function definition // _ZN13MapDecorationC2ENS_4TypeEaaaRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK5Color
    void getImg()const; // _ZNK13MapDecoration6getImgEv
//  void setImg(MapDecoration::Type); //TODO: incomplete function definition // _ZN13MapDecoration6setImgENS_4TypeE
    void getX()const; // _ZNK13MapDecoration4getXEv
//  void setX(signed const); //TODO: incomplete function definition // _ZN13MapDecoration4setXEa
    void getY()const; // _ZNK13MapDecoration4getYEv
//  void setY(signed const); //TODO: incomplete function definition // _ZN13MapDecoration4setYEa
    void getRot()const; // _ZNK13MapDecoration6getRotEv
//  void setRot(signed const); //TODO: incomplete function definition // _ZN13MapDecoration6setRotEa
    void equals(MapDecoration const&)const; // _ZNK13MapDecoration6equalsERKS_
    bool isRenderedOnFrame()const; // _ZNK13MapDecoration17isRenderedOnFrameEv
    void hashCode(); // _ZN13MapDecoration8hashCodeEv
    std::string getLabel()const; // _ZNK13MapDecoration8getLabelB5cxx11Ev
    void setLabel(std::string const&); // _ZN13MapDecoration8setLabelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void save(CompoundTag &); // _ZN13MapDecoration4saveER11CompoundTag
    void load(CompoundTag const&); // _ZN13MapDecoration4loadERK11CompoundTag
    void getColor()const; // _ZNK13MapDecoration8getColorEv
    void setColor(Color const&); // _ZN13MapDecoration8setColorERK5Color
};
