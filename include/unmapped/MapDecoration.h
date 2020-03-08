#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/util/Color"


class MapDecoration {

public:

    MapDecoration(MapDecoration const&);
    MapDecoration(void);
    MapDecoration(MapDecoration::Type, signed char, signed char, signed char, std::string const&, Color const&);
    void getImg()const;
    void setImg(MapDecoration::Type);
    void getX()const;
    void setX(signed const);
    void getY()const;
    void setY(signed const);
    void getRot()const;
    void setRot(signed const);
    void equals(MapDecoration const&)const;
    bool isRenderedOnFrame()const;
    void hashCode();
    void setLabel(std::string const&);
    void save(CompoundTag &);
    void load(CompoundTag const&);
    void getColor()const;
    void setColor(Color const&);
};
