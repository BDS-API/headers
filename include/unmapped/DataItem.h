#pragma once



class DataItem {

public:
    virtual bool isDataEqual(DataItem const&)const;
    ~DataItem();
//  DataItem(DataItemType, unsigned short); //TODO: incomplete function definition
    void getType()const;
    bool isDirty()const;
    void setDirty(bool);
    void getId()const;
};
