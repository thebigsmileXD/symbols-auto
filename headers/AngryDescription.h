#pragma once

class AngryDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~AngryDescription();
    virtual ~AngryDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
