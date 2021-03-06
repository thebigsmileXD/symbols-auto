#pragma once

class ScaleDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~ScaleDescription();
    virtual ~ScaleDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
