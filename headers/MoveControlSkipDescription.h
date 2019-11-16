#pragma once

class MoveControlSkipDescription : MoveControlDescription {

    virtual void getJsonName(void)const;
    virtual ~MoveControlSkipDescription();
    virtual ~MoveControlSkipDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
