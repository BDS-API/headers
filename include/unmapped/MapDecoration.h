#pragma once

#include "../bedrock/util/Color.h"
#include <string>
#include "../bedrock/nbt/CompoundTag.h"


class MapDecoration {

public:
    MapDecoration();
    ~MapDecoration();
    void load(CompoundTag const&);
    void getRot()const;
//  void setX(signed const); //TODO: incomplete function definition
    void hashCode();
    void save(CompoundTag &);
    void getImg()const;
//  void setY(signed const); //TODO: incomplete function definition
//  void setRot(signed const); //TODO: incomplete function definition
//  void setImg(MapDecoration::Type); //TODO: incomplete function definition
//  MapDecoration(MapDecoration::Type, signed const, signed const, signed const, std::string const&, Color const&); //TODO: incomplete function definition
    MapDecoration(MapDecoration const&);
    void setColor(Color const&);
    void getX()const;
    std::string getLabel()const;
    void getColor()const;
    void getY()const;
    void setLabel(std::string const&);
    bool isRenderedOnFrame()const;
    void equals(MapDecoration const&)const;
};
