#pragma once

class IsShearedDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~IsShearedDescription();
    virtual ~IsShearedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
