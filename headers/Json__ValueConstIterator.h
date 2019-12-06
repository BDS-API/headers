#pragma once

class Json::ValueConstIterator {

public:

    void ValueConstIterator(Json::ValueConstIterator const&);
    void ValueConstIterator(void);
    void ValueConstIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&);
};
