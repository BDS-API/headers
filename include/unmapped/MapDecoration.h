#pragma once

#include "./MapDecoration.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/util/Color.h"
#include <string>


class MapDecoration {

public:

    ~MapDecoration();
    MapDecoration(MapDecoration const&);
    MapDecoration();
//  MapDecoration(MapDecoration::Type, signed const, signed const, signed const, std::string const&, Color const&); //TODO: incomplete function definition
    void getImg()const;
//  void setImg(MapDecoration::Type); //TODO: incomplete function definition
    void getX()const;
//  void setX(signed const); //TODO: incomplete function definition
    void getY()const;
//  void setY(signed const); //TODO: incomplete function definition
    void getRot()const;
//  void setRot(signed const); //TODO: incomplete function definition
    void equals(MapDecoration const&)const;
    bool isRenderedOnFrame()const;
    void hashCode();
    std::string getLabel()const;
    void setLabel(std::string const&);
    void save(CompoundTag &);
    void load(CompoundTag const&);
    void getColor()const;
    void setColor(Color const&);
};
