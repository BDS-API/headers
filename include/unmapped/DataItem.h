#pragma once

#include "./DataItem.h"


class DataItem {

public:
    virtual ~DataItem();
    virtual bool isDataEqual(DataItem const&)const;

//  DataItem(DataItemType, unsigned short); //TODO: incomplete function definition
    void getType()const;
    void setDirty(bool);
    void getId()const;
    bool isDirty()const;
};
