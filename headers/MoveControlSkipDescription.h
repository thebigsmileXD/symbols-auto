#pragma once

class MoveControlSkipDescription : MoveControlDescription {

    virtual void getJsonName(void)const;
    virtual void ~MoveControlSkipDescription();
    virtual void ~MoveControlSkipDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}