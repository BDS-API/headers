#pragma once



class DataItem {

public:
    virtual DataItem::~DataItem()
    virtual bool isDataEqual(DataItem const&)const;

    DataItem(DataItemType, unsigned short);
    void getType()const;
    void setDirty(bool);
    void getId()const;
    bool isDirty()const;
};
