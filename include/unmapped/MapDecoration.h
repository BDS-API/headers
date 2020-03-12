#pragma once

#include <string>


class MapDecoration {

public:
    void setLabel(std::string const&);
    void load(CompoundTag const&);
    MapDecoration(MapDecoration const&);
    void setColor(Color const&);
    void getX()const;
//  void setY(signed const); //TODO: incomplete function definition
//  MapDecoration(MapDecoration::Type, signed const, signed const, signed const, std::string const&, Color const&); //TODO: incomplete function definition
    ~MapDecoration();
    std::string getLabel()const;
    void getRot()const;
    void hashCode();
//  void setRot(signed const); //TODO: incomplete function definition
//  void setImg(MapDecoration::Type); //TODO: incomplete function definition
    void save(CompoundTag &);
    void getImg()const;
//  void setX(signed const); //TODO: incomplete function definition
    void equals(MapDecoration const&)const;
    void getColor()const;
    MapDecoration();
    void getY()const;
    bool isRenderedOnFrame()const;
};
