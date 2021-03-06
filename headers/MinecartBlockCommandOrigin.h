#pragma once

class MinecartBlockCommandOrigin : BlockCommandOrigin {

    virtual ~MinecartBlockCommandOrigin();
    virtual ~MinecartBlockCommandOrigin();
    virtual void _ZNK18BlockCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK18BlockCommandOrigin7getNameB5cxx11Ev;
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual void hasChatPerms(void)const;
    virtual void hasTellPerms(void)const;
    virtual void canUseAbility(AbilitiesIndex)const;
    virtual void isWorldBuilder(void)const;
    virtual void canUseCommandsWithoutCheatsEnabled(void)const;
    virtual void isSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void getOriginType(void)const;
    virtual void toCommandOriginData(void)const;
    virtual void getUUID(void)const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);
    virtual void getBlockEntity(void)const;
    virtual void getBaseCommandBlock(void)const;
}
